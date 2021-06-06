#include "dArray.h"

int main(void)
{
    char c; //a character variable to read user input
    printf("\nThis is a test program to test the dArray.h library\n");
    printf("Do you want to create a dynamic array?(y/n): ");
    scanf("%c", &c); //stores the user input character in a character variable 
    getchar(); 

    if(c == 'y' || c == 'Y')
    {
        int size; //array size
        int *arr; //array pointer
        int value; //array value
        int position; //array position

        //test loop
        while(1) 
        {
            //array creation function test
            printf("Enter the size of the dynamic array: ");
            scanf("%i", &size);
            getchar();
            arr = dArray(size);
        
            printArray(arr, size);
            printf("Array size: %d\n", size);

            //append function test
            printf("Do you want to append an element to the dynamic array?(y/n): ");
            scanf("%c", &c);
            if(c == 'y' || c == 'Y')
            {
                printf("Enter the value for appending an element: ");
                scanf("%i", &value);
                getchar();
                arr = append(arr, &size, value);

                printArray(arr, size);
                printf("New array size: %d\n", size);
            }

            //replace function test
            printf("Do you want to replace an element in the dynamic array?(y/n): ");
            scanf("%c", &c);
            if(c == 'y' || c == 'Y')
            {
                printf("Enter the position for replacement: ");
                scanf("%i", &position);
                getchar();
                printf("Enter the value for replacement: ");
                scanf("%i", &value);
                getchar();
                arr = replace(arr, &size, value, position);

                printArray(arr, size);
                printf("New array size: %d\n", size);

            }

            //cut function test
            printf("Do you want to cut the dynamic array in a specific position?(y/n): ");
            scanf("%c", &c);
            if(c == 'y' || c == 'Y')
            {
                printf("Enter the position for cutting the array: ");
                scanf("%i", &position);
                getchar();
                arr = cut(arr, &size, position);

                printArray(arr, size);
                printf("New array size: %d\n", size);

            }

            //resize function test
            printf("Do you want to resize the dynamic array?(y/n): ");
            scanf("%c", &c);
            if(c == 'y' || c == 'Y')
            {
                printf("Enter the new size for the array: ");
                scanf("%i", &position);
                getchar();
                arr = resize(arr, &size, position);

                printArray(arr, size);
                printf("New array size: %d\n", size);

            }

            //front append function test
            printf("Do you want to append an element in front?(y/n): ");
            scanf("%c", &c);
            if(c == 'y' || c == 'Y')
            {
                printf("Enter the value for appending an element in front: ");
                scanf("%i", &value);
                getchar();
                arr = appendFront(arr, &size, value);

                printArray(arr, size);
                printf("New array size: %d\n", size);
            }

            //pop function test
            printf("Do you want to pop an element?(y/n): ");
            scanf("%c", &c);
            getchar();
            if(c == 'y' || c == 'Y')
            {
                arr = pop(arr, &size);

                printArray(arr, size);
                printf("New array size: %d\n", size);
            }

            //front pop function test
            printf("Do you want to pop the front element?(y/n): ");
            scanf("%c", &c);
            getchar();
            if(c == 'y' || c == 'Y')
            {
                arr = popFront(arr, &size);

                printArray(arr, size);
                printf("New array size: %d\n", size);
            }

            //delete array function test
            printf("Do you want to dynamic array?(y/n): ");
            scanf("%c", &c);
            getchar();
            if(c == 'y' || c == 'Y')
            {
                arr = deleteArray(arr);

                printf("Array deleted\n");
            }

            printf("Do you want to run the test again?(y/n): ");
            scanf("%c", &c);
            getchar();
            if(c == 'n' || c == 'N')
                break; //when user input is no, it break out of the loop
        }
    }
    
    printf("Program Ended!\n");
    return 0;
}
