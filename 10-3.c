#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int GCD(int num1, int num2);
int main(void) {
	int num1, num2;
	printf("두정수: ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		printf("최공수: %d", GCD(num1, num2));
	else
		printf("최공수: %d", GCD(num2, num1));
	return 0;
}

int GCD(int num1, int num2) {
	int i, result;
	for (i = 1; i < num1; i++) {
		if (num1%i == 0 && num2 % i == 0)
			result = i;
	}
	return result;
}
