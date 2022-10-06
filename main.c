#include "monty.h"
#include "lists.h"

data_t data = DATA_INIT;

/**
* main - Entry point for monty bytecode interpreter
* @argc: number of arguments
* @argv: array of arguments
*
* Return: EXIT_SUCCESS or EXIT_FAILURE
*/
int main(int argc, char **argv)
{
	args_t args;

	args->ac = argc;
	args->av = argv[1];
	args->line_number = 0;

	monty(&args);

	return (EXIT_SUCCES);
}

/**
* monty - helper function for main function.
* @args: pointer to struct of arguments parsed to
*		 main function from the command line.
*
* Description: opens and reads from the file containing
*			   the opcodes, and calls the right function indicated
*			   by the opcode that will find the corresponding executing function
*              to modify the stack.
*/
void monty(args_t *args)
{
	size_t len = 0
	int get = 0;
	void (*code_func)(stack_t **, unsigned int);

	if (args->ac != 2)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(EXIT_FAILURE);
	}
	/** else we want to open the file av == argv[1]*/
	data.fptr = fopen(args->av, "r");
	if (data.fptr == NULL)
	{
		dprintf(STDERR_FILENO, FILE_ERROR, args->av);
		exit(EXIT_FAILURE);
	}
	while (1) /**means once the file was opened successfully*/
	{
		args->linenumber++;
		get = getline(&(data.line), &len, data.fptr);
		if (get < 0)
			break;
		data.words = _strtok(data.line);
		if (data.words[0] == NULL || data.words[0][0] == '#')
		{
			free_all(0);
			continue;
		}
		code_func = get_func(data.words);
		if (!code_func)
		{
			dprint(STDERR_FILEN0, UNKNOWN, args->line_number, data.words[0]);
			free_all(1);
			exit(EXIT_FAILURE);
		}
		code_func(&(data.stack), args->line_number);
		free_all(0);
	}
	free_all(1);
}
