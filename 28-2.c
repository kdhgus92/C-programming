#include <stdio.h>
#include <stdlib.h>
void ClearLineFromReadBuffer(void);

#define LEN 30

typedef struct _book
{
	char author[LEN];
	char title[LEN];
	int page;
} book;

int main(void)
{
	int i;
	book * list[3];

	printf("도서정보 입력 \n");
	for (i = 0; i < 3; i++)
	{
		book* pBook = (book*)malloc(sizeof(book) * 1);

		printf("저자: ");
		fgets(pBook->author, LEN, stdin);

		printf("제목: ");
		fgets(pBook->title, LEN, stdin);

		printf("페이지 수: ");
		scanf("%d", &(pBook->page));

		ClearLineFromReadBuffer();

		list[i] = pBook;
	}

	printf("\n도서 정보 출력\n");
	for (i = 0; i < 3; i++)
	{
		printf("book %d \n", i + 1);
		printf("저자: %s", list[i]->author);
		printf("제목: %s", list[i]->title);
		printf("페이지 수: %d \n", list[i]->page);
	}

	
	for (i = 0; i < 3; i++)
	{
		free(list[i]);
	}
	
	return 0;

}

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}
