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

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int len = 0, i;
	char temp;
	char voca[50];
	printf("영단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;

	for (i = 0; i < len / 2; i++) {
		temp = voca[i];
		voca[i] = voca[len - 1 - i];
		voca[len - 1 - i] = temp;
	}
	printf("%s \n", voca);
	return 0;
}
*/
