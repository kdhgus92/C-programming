#include <stdio.h>

int main(int argc, char*argv[])
{
	int numA = 0, numP = 0;
	char word[50];
	FILE* file;
	int state;

	if (argc != 2)
	{
		printf("usage: word test.txt \n");
		return 1;
	}

	file = fopen(argv[1], "rt");
	if (file == NULL)
	{
		printf("file open error!\n");
	}

	while (1)
	{
		fscanf(file, "%s", word);
		if (feof(file) != 0) //0이면 안끝난것
			break;

		if (word[0] == 'A' || word[0] == 'a')
			numA++;

		if (word[0] == 'P' || word[0] == 'p')
			numP++;
	}

	printf("A로 시작 단어 수 : %d \n", numA);
	printf("P로 시작 단어 수 : %d \n", numP);

	state = fclose(file);
	if (state != 0)
	{
		printf("file close error! \n");
		return 1;
	}
	return 0;
}
