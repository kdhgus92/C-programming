#include <stdio.h>

int main(void)
{
	int ch1;
	printf("알파벳 입력: ");
	ch1 = getchar();

	
	if (ch1 >= 'a'&&ch1 <= 'z')
	{
		ch1 -= 32;
		putchar(ch1);
	}
	else if (ch1 < 'A' || ch1 > 'Z')
		printf("오류: 알파벳 입력!\n");
	return 0;
}
