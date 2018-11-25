#include <stdio.h>
#include <string.h>

int StringLen(char * str);

int main(void)
{
	int i, len;
	char str[50];
	printf("문자열 입력: ");
	scanf("%s", str);
	len = strlen(str);

	for (i = 0; i < StringLen(str) / 2; i++)
	{
		if (str[i] != str[StringLen(str) - 1 - i]) 
		{
			printf("회문이 아닙니다.\n");
			return 0;
		}
	}

	if (i >= StringLen(str) / 2)
		printf("회문 입니다. \n");

	return 0;
}

int StringLen(char * str)
{
	int len = 0;
	while (str[len] != 0)
		len++;
	return len;
}
