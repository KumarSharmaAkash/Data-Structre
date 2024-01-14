// Write a program to create a 1-D integer Array using dynamic memory allocation.
// Enter the values of Array elements using the Keyboard perform the following operations on it.
// b) Traverse the array from last to first.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sizeOfArray;
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
    printf("\nElements Of Entered Array Are As Follows:\n");
    for (int j = sizeOfArray - 1; j >= 0; j--)
    {
        printf("%d \t", array[j]);
    }
}