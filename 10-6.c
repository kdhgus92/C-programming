#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int sec, h, m, s;

	printf("초입력 : ");
	scanf("%d", &sec);

	s = sec % 60;
	h = sec / 3600;
	m = (sec % 3600) / 60;

	printf("[h: %d, m: %d, s: %d ]\n", h, m, s);
	return 0;
}
