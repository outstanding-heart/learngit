#include <stdio.h>
#define MAX 100

int main()
{
	int number[MAX], i;
	for(i=0; i<MAX; i++)
	{
		if(i == 0) number[i] = 0;
		else if(i == 1) number[i] = 1;
		else number[i] = number[i-1] + number[i-2];
		printf("%d ", number[i]);
	}
	printf("\n");
	printf("Hello world!\n");
	return 0;
}
