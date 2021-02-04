#include <stdio.h>

/*
find maximum and minimum
*/

int main(void)
{

    int aList[5] = {0};
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        scanf_s("%d", &aList[i]);
    }
    int max = aList[0], min = aList[0];

    for (i = 0; i < 5; i++)
    {
        if (max < aList[i])
        {
            max = aList[i];
        }

        if (min > aList[i])
        {
            min = aList[i];
        }
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", aList[i]);
    }
    putchar('\n');
    printf("MAX: %d, MIN: %d", max, min);

    return 0;
}