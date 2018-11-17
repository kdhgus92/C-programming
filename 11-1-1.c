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


/* 정답 
int main(void)
{
	int arr[5];
	int max, min, sum, i;
	
	for(i=0;i<5;i++){
		printf("입력: ");
		scanf("%d", arr[i];
	}
	
	max=min=sum=arr[i];
	for(i=1;i<5;i++){
		sum += arr[i];
		if(max<arr[i])
			max = arr[i];
		if(min>arr[i])
			min = arr[i];
	}
	printf("최댓값: %d \n", max);
	printf("최솟값: %d \n", min);
	printf("총  합: %d \n", sum);
	return 0;	
}
*/
