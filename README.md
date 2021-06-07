# Brief:
This is a custom built library used to implement dynamic array in C. 
This code was tested in WSL (Windows 10) in Visual Studio Code under remote explorer.

# Contents:
* dArray.h - Contains the function prototypes.
* dArray.c - Contains the function implementations.
* test.c - A test function to test the functionality of all the library functions
* Makefile - It is a tool which controls the generation of executables and other non-source files of a program from the program's source files.

# Functions: 
`int *dArray(int size)` - Requires the size of the dynamic array and returns a pointer to the dynamic array.

`int *deleteArray(int *arr)` - Requires an array pointer and returns a NULL pointer.

`int *append(int *arr, int *size, int value)` - Requires array pointer, size, value to append and returns the modified array pointer.

`int *replace(int *arr, int *size, int value, int position)` - Requires array pointer, size, position and returns the modified array pointer.

`int *cut(int *arr, int *size, int position)` - Requires array pointer, size, position and returns the modified array pointer.

`int *resize(int *arr, int *size, int newSize)` - Requires array pointer, size, new size and returns the modified array pointer.

`int *appendFront(int *arr, int *size, int value)` - Requires array pointer, size, value and returns the modified array pointer.

`int *pop(int *arr, int *size)` - Requires array pointer, size and returns the array pointer with its last element popped. 
 
`int *popFront(int *arr, int *size)` - Requries array pointer, size and returns the array pointer with its first element popped.

`void printArray(int *arr, int size)` - Requires the array pointer and prints the array on the screen.

# How to use the library:
* Include the library header in your main.c `#include "dArray.h"`.
* Note: Make sure that you have the header and the source file in the same directory. 
* Run make command.
* make: command creates the required object and executable files `$ make`.
* make run: command runs the program `$ make run`.
* make clean: cleans all the previous object and executable files `$ make clean`. 
