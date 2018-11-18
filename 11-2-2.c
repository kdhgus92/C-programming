#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int len = 0, i;
	char voca[50];
	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;
	for (i = 0; i < len; i++)
		printf("%c", voca[len - 1 - i]);
	return 0;
}
