#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	FILE * file1;
	FILE * file2;

	int state1, state2;

	if (argc != 3)
	{
		puts("usage: comp source1 source2 \n");
		return 1;
	}

	file1 = fopen(argv[1], "rt");
	file2 = fopen(argv[2], "rt");


	if (feof(file1) != 0 || feof(file2) != 0)
	{
		printf("파일이 없습니다.");
		return 1;
	}

	while (1)
	{
		char c1, c2;
		if (feof(file1) != 0 && feof(file2) != 0) {
			printf("두 개의 파일은 완전히 일치합니다.\n");
			break;
		}

		c1 = fgetc(file1);
		c2 = fgetc(file2);

		if (c1 != c2) {
			printf("두 개의 파일은 서로 다릅니다.\n");
			break;
		}


	}

	state1 = fclose(file1);
	state2 = fclose(file2);
	if (state1 != 0 || state2 != 0){
		puts("file close error!\n");
		return 1;
	}
	return 0;
}
