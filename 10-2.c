/*
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
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
void NineNine(int num1, int num2);

int main(void) {
	int num1, num2;
	printf("두 정수 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		NineNine(num1, num2);
	else
		NineNine(num2, num1);
	return 0;
}

void NineNine(int num1, int num2) {
	int i,j;
	for (i = num1; i < num2 + 1; i++) {
		for(j=1;j<10;j++)
			printf("%d x %d = %d \n", i, j, i*j);
		printf("\n");
	}

}
