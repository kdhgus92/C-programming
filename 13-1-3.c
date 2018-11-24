#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int * ptr = arr + (sizeof(arr)/sizeof(int)-1);
	printf("%d \n", *ptr);
	int i, tot=0;
	for (i = 0; i < 5; i++)
	{
		tot += *ptr;
		ptr--;
	}
	printf("%d \n", tot);
	return 0;
}
