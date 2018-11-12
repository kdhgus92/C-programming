#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void) {
	int num=2, i=0, cnt = 0;
	printf("2 ");

	while (cnt < 9) {
		for (i = 2; i < num; i++) {
			if (num - 1 == i && num % (num - 1) != 0){
				printf("%d ", num);
				cnt++;
			}
			else if (num%i == 0)
				break;
			else;
		}
		num++;
	}
}
