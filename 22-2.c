#include <stdio.h>

struct employee
{
	char name[20];
	char pid[20];
	int salary;
};

int main(void)
{
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름: ");
		scanf("%s", arr[i].name);
		printf("번호: ");
		scanf("%s", arr[i].pid);
		printf("월급: ");
		scanf("%d", &arr[i].salary);
	}

	for (i = 0; i < 3; i++)
		printf("%s %s %d \n", arr[i].name, arr[i].pid, arr[i].salary);
	return 0;
}
