#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct book {
	char name[30];
	char title[50];
	int page;
} Book;

int main(void)
{
	Book barr[3];
	int i;

	printf("도서 정보 입력 \n");

	for (i = 0; i < 3; i++)
	{
		printf("저자: ");
		scanf("%s", barr[i].name);
		getchar();
		printf("제목: ");
		scanf("%s", barr[i].title);
		getchar();
		printf("페이지 수: ");
		scanf("%d", &barr[i].page);
	}

	printf("\n도서 정보 출력");
	for (i = 0; i < 3; i++)
	{
		printf("book%d \n", i);
		printf("저자 : %s \n", barr[i].name);
		printf("제목 : %s \n", barr[i].title);
		printf("페이지 수: %d \n", barr[i].page);
	}

	return 0;
}
