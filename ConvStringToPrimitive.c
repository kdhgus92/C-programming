#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));
	
	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str));
	return 0;
}
