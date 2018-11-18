#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, Len = 0, max;
	char voca[50];
	printf("단어입력: ");
	scanf("%s", voca);

	max = voca[0];

	while (voca[Len] != 0)
		Len++;

	for (i = 0; i < Len; i++) {
		if (max < voca[i])
			max = voca[i];
	}

	printf("%c", max);
	return 0;
}
