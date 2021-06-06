#include<stdlib.h>
#include<stdio.h>

//a function to create dynamic array
int *dArray(int size);

//a function to delete the dynamic array
int *deleteArray(int *arr);

//a function to append an element
int *append(int *arr, int *size, int value);

//a function to replace an element from a position
int *replace(int *arr, int *size, int value, int position);

//a function to cut the array at a specific position
int *cut(int *arr, int *size, int position);

//a function to resize the dynamic array
int *resize(int *arr, int *size, int newSize);

//a function to append an element in front
int *appendFront(int *arr, int *size, int value);

//a function to pop the last element in the dynamic array
int *pop(int *arr, int *size);

//a function to pop the front element 
int *popFront(int *arr, int *size);

//a function to print the dynamic array
void printArray(int *arr, int size);
