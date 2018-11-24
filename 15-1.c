#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowOddElem(int arr[])
{
	int i;

	printf("홀수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (i == 8)
			printf("%d", arr[i]);
		else if (i % 2 == 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

void ShowEvenElem(int arr[])
{
	int i;

	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			printf("%d", arr[i]);
		else if (i % 2 != 0)
			printf("%d, ", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	ShowOddElem(arr);
	ShowEvenElem(arr);
	return 0;
}
