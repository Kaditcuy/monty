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
[errors_1.c](./errors_1.c) | Handles all error messages to be printed to stderr
[errors_2.c](./errors_2.c) | Handles all error messages to be printed to stderr
[int_to_string.c](./int_to_string.c) | Handles all integer values of the bytecode and converts to string where necessary
[monty_funcs_1.c](./monty_funcs_1.c) | handler functions for the instructions
[monty_funcs_2.c](./monty_funcs_2.c) | handler functions for the instructions
[monty_funcs_3.c](./monty_funcs_3.c) | handler functions for the instructions
[monty_funcs_4.c](./monty_funcs_4.c) | handler functions for the instructions
[set_op_toks_error.c](./set_op_toks_error.c) | Sets last element of op_toks to be an error code
[_strtok.c](./_strtok.c) | string tokenizing functions
[run_monty.c](./run_monty.c) | Primary function to execute a Monty bytecodes script
[stack.c](./stack.c) | Handles creation and implementation of stack to be used by the scripts instruction
