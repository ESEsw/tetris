#include <stdio.h>

char set_tetris_table(int i, int j, char c)
{
	char **tetris_table;

	tetris_table = (char**)malloc(sizeof(char*)*21);
	for(i = 0; i< 21; i++)
	{
		tetris_table[i] = (char *)malloc(sizeof(char)*10);
	}

	return &tetris_table;
}

int main()
{
	char *arr;
	arr = set_tetris_table(0,0,"A");

	printf("%c", arr[0][0]);
	return 0;
}
