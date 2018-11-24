#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr;
	int i;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		*ptr += 2;
		printf("%d ", *ptr);
		ptr++;
	}
	printf("\n");
	return 0;
}
