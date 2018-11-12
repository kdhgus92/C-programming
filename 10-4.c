#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(void) {
	int b, s, c;
	printf("현재 당신이 소유하고 잇는 금액: 3500 \n");
	for (b = 1; b < 8; b++) {
		for (s = 1; s < 6; s++) {
			for (c = 1; c < 9; c++) {
				if(b*500+s*700+c*400==3500){
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", b, s, c);
				}
			}
		}
	}
	printf("어떻게 구입하시겠습니까? \n");
	return 0;
}
