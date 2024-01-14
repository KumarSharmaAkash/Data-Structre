
// Write a Program to Find Maximum amd Minimum in a 1-D array.

#include <stdio.h>
#include <time.h>

int main()
{
    int max = 0;
    int min = 0;

    printf("Enter length of Array:\n");
    int LengthOFArray;
    scanf("%d", &LengthOFArray);

    if (LengthOFArray <= 0)
    {
        printf("Invalid array length\n");
        return 1;
    }
    int array[LengthOFArray];

    srand(time(NULL));
    for (int i = 0; i < LengthOFArray; i++)
    {
        array[i] = rand();
        printf("element %d:%d\n", i + 1, array[i]);
    }

    clock_t start_time = clock();
    max = min = array[0];
    for (int i = 1; i < LengthOFArray; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        else if (array[i] < min)
        {
            min = array[i];
        }
    }
    clock_t end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    printf("Maximum number is: %d\n", max);
    printf("Minimum number is: %d\n", min);
    printf("\nTime taken to find Maximum and Minimum numbers: %.6fs\n", time_taken);

    return 0;
}
