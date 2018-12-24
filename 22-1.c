#include <stdio.h>
#include <string.h>

struct employee
{
	char name[20];
	char socialNum[20];
	int paycheck;
};

int main(void)
{
	struct employee emp1;

	printf("이름: "); scanf("%s", emp1.name);
	printf("주민번호: "); scanf("%s", emp1.socialNum);
	printf("월급: "); scanf("%d", &emp1.paycheck);

	printf("이름: %s \n", emp1.name);
	printf("주번: %s \n", emp1.socialNum);
	printf("월급: %d \n", emp1.paycheck);
	return 0;
}
