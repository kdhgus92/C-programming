#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Func(int i) {
	if (i == 0)
		return 1;
	else
		return 2 * Func(i - 1);
}

int main(void) {
	int i;
	printf("정수 입력: ");
	scanf("%d", &i);

	printf("2의 %d승은 : %d \n", i, Func(i));
	return 0;
}
