#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int num1, num2, num3, i, j;
	printf("두 정수 입력 : ");
	scanf("%d %d", &num1, &num2);
	num3 = (num1 < num2) ? num2 : num1;
	num1 = (num1 < num2) ? num1 : num2;

	for (i = num1; i < num3 + 1; i++) {
		for (j = 1; j < 10; j++)
			printf("%d x %d = %d \n", i, j, i*j);
		printf("\n");
	}
}
