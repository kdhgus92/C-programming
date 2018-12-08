#include <stdio.h>


void ShowArr(int(*arr)[4], int column)
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

void RotaArr(int(*arr)[4], int column)
{
	int i, j;
	int temp[4][4];

	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			temp[i][j] = arr[3-j][i];
	}

	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			arr[i][j] = temp[i][j];
	}
}

int main(void)
{
	int i, j;
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	
	ShowArr(arr, 4);
	RotaArr(arr, 4);
	ShowArr(arr, 4);
	RotaArr(arr, 4);
	ShowArr(arr, 4);
	RotaArr(arr, 4);
	ShowArr(arr, 4);
	RotaArr(arr, 4);
	ShowArr(arr, 4);

	return 0;
}
