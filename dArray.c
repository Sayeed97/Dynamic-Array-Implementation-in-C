#include "dArray.h"

//dynamic array creation function 
int *dArray(int size)
{
    int *arr = malloc(size*sizeof(int));
    for(int i=0; i<size; i++)
        arr[i] = 0;
        
    return arr;
}

//deletion of dynamic
int *deleteArray(int *arr)
{
    free(arr);
    arr = NULL;
    return arr;
}

//dynamic array appending function
int *append(int *arr, int *size, int value)
{
    (*size)++;
    int *ptr = malloc((*size)*sizeof(int));
    for(int i=0; i<(*size); i++)
    {
        if(i==((*size)-1))
            ptr[i] = value;
        else
            ptr[i] = arr[i];
    }
    
    free(arr);
    
    return ptr;
}

//dynamic array replace function
int *replace(int *arr, int *size, int value, int position)
{
    if(position>=0 && position<(*size))
    {
        arr[position] = value;
        return arr;
    }   
    else
        printf("Element Replace Error: Position not within range\n");
        return 0;
}

//dynamic array cut function
int *cut(int *arr, int *size, int position)
{
    if(position>=0 && position<(*size))
    {
        int *ptr = malloc(position*sizeof(int));
        for(int i=0; i<position; i++)
            ptr[i] = arr[i];
        (*size) = position
        ;
        return ptr;
        free(arr);
    }
    else
    {
        printf("Array Position Error\n");
        return 0;
    }
}

//resize function for the dynamic array
int *resize(int *arr, int *size, int newSize)
{
    int *ptr;
    if(newSize == (*size))
        return arr;
    else if(newSize>(*size))
    {
        ptr = malloc(newSize*sizeof(int));
        for(int i=0; i<newSize; i++)
        {
            if(i<(*size))
                ptr[i] = arr[i];
            else 
                ptr[i] = 0;
        }
        (*size) = newSize;
        free(arr);
    }
    else
    {
        ptr = cut(arr, size, newSize);
        (*size) = newSize;
        free(arr);
    }
        
    return ptr;
}

//a function to append an element in front
int *appendFront(int *arr, int *size, int value)
{
    int *ptr = malloc((*size)*sizeof(int));
    ptr[0] = value;
    for(int i=0; i<(*size); i++)
        ptr[i+1] = arr[i];
    
    free(arr);
    (*size)++;
    
    return ptr;
}

//a function to pop the last element
int *pop(int *arr, int *size)
{
    int *ptr = malloc(((*size)-1)*sizeof(int));
    for(int i=0; i<((*size)-1); i++)
        ptr[i] = arr[i];
    
    printf("popped element: %d\n", arr[(*size)-1]);
    free(arr);
    (*size)--;
    
    return ptr;
}

//a function to pop the front element 
int *popFront(int *arr, int *size)
{
    int *ptr = malloc(((*size)-1)*sizeof(int));
    for(int i=0; i<((*size)-1); i++)
        ptr[i] = arr[i+1];
    
    printf("first popped element: %d\n", arr[0]);
    free(arr);
    (*size)--;
    
    return ptr;
}

//dynamic array print function
void printArray(int *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        if(i==0)
            printf("[%d, ", arr[i]);
        else if(i<(size-1))
            printf("%d, ", arr[i]);
        else
            printf("%d]", arr[i]);
    }
        
    printf("\n");
}
