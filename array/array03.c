#include <stdio.h>

/*
find minimum value of array
*/

int main(void)
{

	int aList[5] = {30, 40, 10, 50, 20};
	int i = 0, nTemp = 0;

	for (i = 0; i < 5; i++)
	{
		if (aList[0] > aList[i])
		{
			nTemp = aList[i];
			aList[i] = aList[0];
			aList[0] = nTemp;
		}
	}

	//print element of array
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", aList[i]);
	}

	putchar('\n');
	printf("MIN: %d", aList[0]);

	return 0;
}