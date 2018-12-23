#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ConvToInt(char c)
{
	int diff = 1-'1';
	return c + diff;
}


int main(void)
{
	int i, tot = 0, len;
	char str[50];
	printf("문자입력: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	printf("len : %d \n", len);
	printf("%s \n", str);
	printf("%c", str[len - 1]);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
			tot += ConvToInt(str[i]);
	}

	printf("총합: %d", tot);
	return 0;
}
