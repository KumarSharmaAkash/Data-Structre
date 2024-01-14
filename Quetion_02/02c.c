
// Write a program to create a 1-D integer Array using dynamic memory allocation.
// Enter the values of Array elements using the Keyboard perform the following operations on it.
// c)Search a particular Number.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sizeOfArray;
    int Key;
    printf("Enter The Size OF An Array:\n");
    scanf("%d", &sizeOfArray);
    int *array = (int *)malloc(sizeof(int) * sizeOfArray);
    if (!array)
    {
        printf("Memory Not Allocated\n");
        return -1;
    }
    printf("Enter The Elements :\n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\nEnter Number You Want To search In Array :\n");
    scanf("%d", &Key);
    for (int j = 0; j < sizeOfArray; j++)
    {
        if (array[j] == Key)
        {
            printf("\n%d is present at index %d.\n", Key, j);
            free(array);
            return 0;
        }
    }
    printf("\n%d is not present in array.\n", Key);
    return 0;
}
