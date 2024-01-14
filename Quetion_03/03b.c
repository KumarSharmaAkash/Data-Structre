#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int i = 0;
    int index;

    printf("Enter the size of array: \n");
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

    printf("Enter elements of array: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Printing elements of array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d \t ", ptr[i]);
    }

    printf("\nEnter the index for element to be deleted:\n");
    scanf("%d", &index);

    if (index < 0 || index >= size)
    {
        printf("Invalid index for deletion!\n");
        free(ptr);
        return 0;
    }
    for (i = index; i < size - 1; i++)
    {
        ptr[i] = ptr[i + 1];
    }

    size--;

    printf("Array after deletion:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);

    return 0;
}
