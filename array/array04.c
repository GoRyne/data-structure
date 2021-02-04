#include <stdio.h>

/*
length of array
*/

int main(void)
{

    char szBuffer[32] = {0};
    int nLength = 0;

    printf("Input Your Name : ");
    gets(szBuffer);

    while (szBuffer[nLength] != 0)
    {
        nLength++;
    }

    printf("Your name is : %s(%d). \n", szBuffer, nLength);

    return 0;
}