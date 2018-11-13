#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int n, k=0, result=1;
	printf("n입력: ");
	scanf("%d", &n);

	while (result <= n) {
		result = result * 2;
		k++;
	}

	printf("%d", k - 1);
	return 0;
}
