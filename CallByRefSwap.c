#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Swap(int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr1;
}


int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n", num1, num2);

	Swap(&num1, &num2);
	printf("num1 num2 : %d %d \n", num1, num2);
	return 0;
}
