#include <stdio.h>

int main(void) {
	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 성벌 나이 순 입력: ");
		scanf("%s %c %d", name, &sex, &age);
		fprintf(fp, "%s %c %d", name, sex, age);
	}
	fclose(fp);
	return 0;
}
