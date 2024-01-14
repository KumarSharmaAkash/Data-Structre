#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int i = 0;
    int index, element;

    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Enter a valid size greater than 0!");
        return 0;
    }
    int *ptr = (int *)malloc(size * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!");
        return 0;
    }

    printf("Enter elements of the array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Printing elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\nEnter the index for the new element to be placed:\n");
    scanf("%d", &index);

    if (index < 0 || index > size)
    {
        printf("Invalid index for insertion!\n");
        free(ptr);
        return 0;
    }

    printf("Enter the element:\n");
    scanf("%d", &element);
    size = size + 1;

    ptr = (int *)realloc(ptr, size * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory reallocation failed!");
        return 0;
    }

    for (i = size - 1; i > index; i--)
    {
        ptr[i] = ptr[i - 1];
    }

    ptr[index] = element;

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}
