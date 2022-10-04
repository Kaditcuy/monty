# 0x19. C - Stacks, Queues - LIFO, FIFO

## `C` `Algorithim & Data structure`

## Description

This project is about building a bytecode interpreter for the `Monty 0.98` Scripting language, coded in `C`.

Compilation :package::

```gcc -Wall -Werror -Wextra -pedantic *.c -o monty```

Usage :computer::

```./monty name_of_file.m```

The program reads line by line from the file "<name_of_file>.m" that contains one instruction per line. It then calls the right function to modify a stack according to the instruction on the line. I t prints custom error messages if the instruction is wrong.

## Table of contents

File | Description
---- | -----------
[main.c](./main.c) |  entry point of the program
[monty.h](./monty.h) | main header file
[lists.h](./lists.h) | header file for the lists functions
[get_func.c](./get_func.c) | function that picks the right function for the instruction
[handler_funcs1.c](./handler_funcs1.c) | handler functions for the instructions
[handler_funcs2.c](./handler_funcs2.c) | handler functions for the instructions
[handler_funcs3.c](./handler_funcs3.c) | handler functions for the instructions
[list_funcs1.c](./list_funcs1.c) | doubly linked list functions
[list_funcs2.c](./list_funcs2.c) | doubly linked list functions
[strtow.c](./strtow.c) | string tokenizing functions
[free.c](./free.c) | memory handling functions
[char.c](./char.c) | handler functions for ascii instructions
