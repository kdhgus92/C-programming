#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int i;
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' };
	for (i = 0; i < 9; i++)
		printf("%c", arr[i]);
	return 0;
}
