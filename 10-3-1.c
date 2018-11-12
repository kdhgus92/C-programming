//호제법을 이용한 코드

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int GCD(int num1, int num2);
int main(void) {
	int num1, num2;
	printf("두정수 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		printf("최공수 : %d \n", GCD(num1, num2));
	else
		printf("최공수 : %d \n", GCD(num2, num1));
	return 0;
}

int GCD(int num1, int num2) {
	int r;
	r = num2 % num1;
	if (r == 0)
		return num1;
	else
		return GCD(r, num1);
}
