#include <stdio.h>

void MaxAndMin(int ar[],int len, int **dptr1, int **dptr2)
{
	int i;

	for (i = 0; i < len; i++)
	{
		if (ar[i] > **dptr1)
			*dptr1 = &ar[i];
		if (ar[i] < **dptr2)
			*dptr2 = &ar[i];
	}
}

int main(void)
{
	int * maxPtr;
	int * minPtr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("정수 입력 %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	maxPtr = &arr[0];
	minPtr = &arr[0];

	MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);
	printf("최대: %d, 최소: %d \n", *maxPtr, *minPtr);
	return 0;
}
