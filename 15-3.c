#include <stdio.h>

int main(void)
{
	int i,num;
	int front = 0, back = 9;
	int arr[10];
	
	printf("총 10개의 숫자 입력 \n");
	for (i = 0; i < 10; i++) 
	{
		printf("입력: ");
		scanf("%d", &num);
		if (num % 2 != 0)
			arr[front++] = num;
		else
			arr[back--] = num;
	}
	
	printf("배열 요소의 출력 : ");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
	
	return 0;
}
