#include <stdio.h>

long FileSize(FILE * fp)
{
	long fpos;
	long fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;

}

int main(void)
{
	char str[100];
	FILE * fp = fopen("src.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %ld \n", FileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %ld \n", FileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	fclose(fp);
	return 0;
}
