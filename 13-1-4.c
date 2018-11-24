#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[6] = { 1,2,3,4,5,6 };
	int * ptr1 = &arr[0];
	int * ptr2 = &arr[5];
	int i;
	int * temp;

	for (i = 0; i < sizeof(arr) / (2 * sizeof(int)); i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;
	}
	for (i = 0; i < 6; i++)
		printf("%d ", arr[i]);
	return 0;
}
