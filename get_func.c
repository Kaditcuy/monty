#include "monty.h"
#include "lists.h"

/**
* get_func - selects the right function
* @line: line from the bytecode file parsed to main
*
* Return: pointer to the selected fucntion, or NULL on failue
*/
void (*get_func(char **words))(stack_t **, unsigned int)
{
	instruction_t func_array[] = {
		{"push", push_handler},
		{"pall", pall_handler},
		{"pint", pint_handler},
		{"pop", pop_handler},
		{"swap", swap_handler},
		{"add", add_handler},
		{"nop", nop_handler},
		{"sub", sub_handler},
		{"div", div_handler},
		{"mul", mul_handler},
		{"mod", mod_handler},
		{"pchar", pchar_handler},
		{"pstr", pstr_handler},
		{"rotl", rotl_handler},
		{"rotr", rotr_handler},
		{"stack", stack_handler},
		{"queue", queue_handler},
		{NULL, NULL}
	};

	int codes = 17, i;

	for (i = 0; i < codes; i++)
	{
		if (strcmp(func_array[i].opcode, words[0]) == 0)
		{
			return (func_array[i].f);
		}
	}
	return (NULL);
}
