#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len;
	char str[50];
	printf("문자열 입력: ");
	scanf("%s", str);
	len = strlen(str);

	for (i = 0; i < strlen(str) / 2; i++)
	{
		if (str[i] != str[strlen(str)-1 - i])
			break;
	}

	if (i >= strlen(str) / 2)
		printf("회문 입니다. \n");

	return 0;
}
