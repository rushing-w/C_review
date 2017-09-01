#define _CRT_SECURE_NO_WARNINGS 1

#include"CommentConvert.h"

int main()
{
	FILE *pfIn = fopen("input.c", "r");
	FILE *pfOut = NULL;
	if (pfIn == NULL)
	{
		perror("open file input.c");
		exit(EXIT_FAILURE);
	}
	pfOut = fopen("output.c", "w");
	if (pfOut == NULL)
	{
		perror("open file output.c");
		fclose(pfIn);
		exit(EXIT_FAILURE);
	}
	CommentConvert(pfIn, pfOut);
	printf("×ª»»³É¹¦\n");
	system("pause");
	return 0;
}