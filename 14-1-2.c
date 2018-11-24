#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Swap3(int * ptr1, int * ptr2, int * ptr3)
{
	int temp = *ptr1;
	*ptr1 = *ptr3;
	*ptr3 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d",num1, num2, num3);
	return 0;
}
