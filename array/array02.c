#include <stdio.h>

/*
find maximum value of array
*/

int main(void)
{

    int aList[5] = {30, 10, 40, 20, 50};

    int i = 0;
    int nMax = aList[0];

    //find maximum value
    for (i = 1; i < 5; i++)
    {
        if (nMax < aList[i])
        {
            nMax = aList[i];
        }
    }

    //print element of array
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", aList[i]);
    }

    putchar('\n');
    printf("MAX: %d\n", nMax);

    return 0;
}