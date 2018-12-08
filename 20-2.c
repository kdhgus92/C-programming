#include <stdio.h>
int arr[100][100];

void func(int n) 
{
	int i, j, k, m;
	m = 1;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0 + i / 2; j < n - i / 2; j++)
			{
				arr[i / 2][j] = m;
				m++;
			}
			m += (n - 1 - i);
		}
		else
		{
			for (j = 0 + i / 2 + 1; j < n - i / 2; j++)
			{
				arr[n - (1 + i / 2)][n - (1 + j)] = m;
				m++;
			}
			m += (n - 1 - i);
		}
	}

	m = 1 + n;
	for (j = 0; j < n; j++)
	{
		if (j % 2 == 0)
		{
			for (i = 0+j/2; i < n - (1 + j / 2); i++)
			{
				arr[1+i][n - (1 + j / 2)] = m;
				m++;
			}
			m += (n - 1 - j);
		}
		else
		{
			for (i = 0+j/2; i < n - (2 + j / 2); i++)
			{
				arr[n - (2 + i)][j / 2] = m;
				m++;
			}
			m += (n - 1 - j);
		}
	}
		
}

void ShowArr(int(*arr)[100], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int main(void)
{
	int num;
	printf("숫자를 입력하시오: ");
	scanf("%d", &num);


	func(num);
	ShowArr(arr, num);
	return 0;
}
