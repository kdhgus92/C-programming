#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ComSel(int * arr);
int IsValid(int * arr);
void UsrSel(int * arr);
int Compare(int *arr1, int *arr2);


int main(void)
{
	int comArr[3];
	int usrArr[3];
	int result = 0;
	printf("Start Game! \n");
	ComSel(comArr);

	while (result != 1)
	{
		UsrSel(usrArr);
		result = Compare(comArr, usrArr);
		printf("\n");
	}
	printf("Game End! \n");
}

void ComSel(int * arr)
{
	srand((int)time(NULL));

	arr[0] = rand() % 10;

	do {
		arr[1] = rand() % 10;
	} while (arr[0] == arr[1]);

	do {
		arr[2] = rand() % 10;
	} while (arr[0] == arr[2] || arr[1] == arr[2]);
}

int IsValid(int * arr)
{
	if (arr[0] == arr[1] || arr[0] == arr[2] || arr[1] == arr[2])
		return 0;
	else
		return 1;
}

void UsrSel(int * arr)
{
	int valid;

	printf("3개의 숫자 선택: ");
	while (1)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		valid = IsValid(arr);
		if (valid == 1)
			break;
		else
			printf("잘못된 입력, 재입력: ");;
	}
}


int Compare(int * arr1, int *arr2)
{
	static int count;
	int strike = 0, ball = 0;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (arr1[i] == arr2[j])
			{
				(i == j) ? strike++ : ball++;
				break;
			}
		}
	}

	count++;
	printf("%d 번째 도전 결과: %dstrike, %dball!!\n", count, strike, ball);

	if (strike == 3)
		return 1;
	else
		return 0;
}
