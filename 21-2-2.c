#include <stdio.h>
#include <string.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];

	printf("str1입력: ");
	fgets(str1, sizeof(str1), stdin);
	//ClearLineFromReadBuffer();
	RemoveBSN(str1);
	printf("str2입력: ");
	fgets(str2, sizeof(str2), stdin);
	//ClearLineFromReadBuffer();
	RemoveBSN(str2);

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;

	strncat(str3, str2, sizeof(str3)/sizeof(char)-strlen(str3)-1);
	fputs(str3, stdout);
	return 0;
}
