#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int i;
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' };
	int arrLen = sizeof(arr) / sizeof(char);
	for (i = 0; i < arrLen; i++)
		printf("%c", arr[i]);
	printf("\n");
	return 0;
}
