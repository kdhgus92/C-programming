#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str1[] = "My String";
	char * str2 = "Your String";
	printf("%s %s \n", str1, str2);

	str2 = "Our String";
	printf("%s %s \n", str1, str2);

	str1[0] = 'X';
	//str2[0] = 'X';
	printf("%s", str1);
	//printf("%s %s \n", str1, str2);
	return 0;
}
