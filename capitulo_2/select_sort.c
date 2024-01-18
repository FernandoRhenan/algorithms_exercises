#include <stdio.h>

int main()
{
    int numbers[10] = {4, 1, 2, 9, 5, 0, 3, 6, 8, 7};
    int j, i, x;

    for (i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        for (j = i; j < sizeof(numbers) / sizeof(int); j++)
        {
            if (numbers[i] > numbers[j])
            {
                x = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = x;
            }
        }
    }

    for (int k = 0; k < sizeof(numbers) / sizeof(int); k++)
    {
        printf("%d \n", numbers[k]);
    }

    return 0;
}
