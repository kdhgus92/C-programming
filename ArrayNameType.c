#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[3] = { 0,1,2 };
	printf("배열의 이름 : %p \n", arr);
	printf("배열의 첫 요서: %p \n", &arr[0]);
	printf("두 번째 요소: %p \n", &arr[1]);
	printf("세 번째 요소: %p \n", &arr[2]);
	//arr = &arr[i];
	return 0;
}
