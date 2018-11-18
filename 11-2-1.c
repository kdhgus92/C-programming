#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, cnt=0;
	char arr[50];
	printf("영단어 입력: ");
	scanf("%s", arr);
	for (i = 0; arr[i] != '\0'; i++) {
		if (arr[i] != '\0')
			cnt++;
	}
	printf("단어 수: %d \n", cnt);
	return 0;
}
