#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*#include <ctypes.h>*/
#include <unistd.h>

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct data_s - data of instructions passed to monty from the opened file
*				to be able to acess functions in the file.
* @line: line from the opened file
* @word: tokenized lines
* @stack: pointer to the stack for function calls
* @fptr: file pointer gotten from successfull opening of the file parsed to monty.
* @qflag: flag for stack or queue
*/
typedef struct data_s
{
	char *line;
	char **words;
	stack_t *stack;
	FILE *fptr;
	int qflag;
} data_t;

/**
* struct arg_s - structure for arguments parsed to main
* @ac: number of arguments parsed to main
* @av: name of the file from the command line
* @line_number: number of the current line in the file
*
* Description: arguments parsed to main from the command line
*				used in different functions, organized in a struct for clarity
*/
typedef struct arg_s
{
	int ac;
	char **av;
	unsigned int line_number;
} args_t;


#define DATA_INIT {NULL, NULL, NULL, NULL, 0}
#define USAGE "USAGE: monty file\n"
#define FILE_ERROR "Error: Can't open file %s\n"

















































/* __strtok.c */
int count_words(char *s);
char **_strtok(char *str);
void free_everything(char **args);

/* free.c */
void free_all(int all);

#endif
