#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Bina(int num)
{
	int n[50];
	int i, m = num;
	for (i = 0 ; m > 0 ;i++)
	{
		n[i] =  m % 2;
		m = m / 2;
	}
	for (; i-1 >= 0; i--)
	{
		printf("%d", n[i-1]);
	}
	printf("\n");
}


int main(void)
{
	int num1;
	printf("10진수 정수 입력: ");
	scanf("%d", &num1);
	Bina(num1);
	return 0;
}
