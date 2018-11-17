#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i, max, min, tot = 0;
	int arr[5];
	printf("5개의 정수 입력: ");
	scanf("%d", &arr[0]);
	scanf("%d", &arr[1]);
	scanf("%d", &arr[2]);
	scanf("%d", &arr[3]);
	scanf("%d", &arr[4]);
	max = arr[0];
	min = arr[0];

	for (i = 0; i < 5; i++) {
		if (arr[i] > max)
			max = arr[i];
	}

	for (i = 0; i < 5; i++) {
		if (arr[i] < min)
			min = arr[i];
	}

	for (i = 0; i < 5; i++)
		tot += arr[i];

	printf("최대: %d, 최소: %d, 총합: %d\n", max, min, tot);
	return 0;
}
