# _printf

_printf is a project designed to reproduce the functionality of the printf command in C. This project was carried out as part of a study project at Holberton School to understand and master the concepts of programming in the C language.

## Table of Contents

-   [Project Presentation](#project-presentation)
-   [Requirements](#requirements)
-   [Features](#features)
-   [Installation](#installation)
-   [Usage](#usage)
-   [Contributors](#contributors)

## Project Presentation

The _printf project is based on the printf function from the C standard library. It allows formatting and displaying data on the screen. The source code is composed of the following files:

-   main.h: The header file containing function prototypes and structures used.
-   _printf.c: Contains the main _printf function, which implements the logic for processing format strings.
-   get_func.c: Contains the function for retrieving the corresponding display function for the specified format.
-   helper.c: Contains helper functions for processing strings and numbers.
-   print_funct.c: Contains display functions for each supported format.

![Flowchart](https://lh3.googleusercontent.com/drive-viewer/AAOQEORVZF6aMsCC35B3IhNUvvG_c6ICdS8Ep73fYul73agZ7JlkHHOt5mlq_pGKxvNYP07rmdxdSAIldeQEV_tP3di43pHmTQ=w1920-h878)

## Requirements

-   Ubuntu 20.04
-   GCC
-   Git

## Features

_printf supports the following format specifiers:

-   %c: character
-   %s: string of characters
-   %d or %i: signed integer in base 10

More information with the command: `man _printf`

## Installation

1.  Clone this repository on your local machine:

`git clone https://github.com/Maxel6/holbertonschool-printf.git`

2.  Compile the source files with the following command:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o _printf`

## Usage

Include the header file `main.h` in your project and use the `_printf` function in the same way you would use the `printf` function from the C standard library.

Here's an example of using _printf:

`#include "main.h"
int main(void) {
 _printf("Hello, %s!\n", "Holberton");
 _printf("I have %d apples and %i pears.\n", 5, 7);
 _printf("Here's a character: %c\n", 'A');
 return (0);
}` 


`simon@ubuntu:~/c/printf$ ./_printf
Hello, Holberton!
I have 5 apples and 7 pears.
Here's a character: A` 

## Contributors

This project was carried out by [Axel Malka](https://github.com/Maxel6) and [Simon Descombes](https://github.com/SimonDesc).

