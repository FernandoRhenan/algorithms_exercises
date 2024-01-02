#include <stdio.h>

// Código que implementa a ordenação por inserção na prática.

int main()
{
    int numbers[10] = {4, 1, 2, 9, 5, 0, 3, 6, 8, 7};
    int j, i;

    for (j = 1; j < sizeof numbers / 4; j++)
    {
        int key = numbers[j];
        i = j - 1;

        while (i >= 0 && numbers[i] > key)
        {
            numbers[i + 1] = numbers[i];
            i = i - 1;
        }
        numbers[i + 1] = key;
    }

    // Imprimir os valores ordenados
    for (int k = 0; k < sizeof numbers / 4; k++)
    {
        printf("%d \n", numbers[k]);
    }

    return 0;
}