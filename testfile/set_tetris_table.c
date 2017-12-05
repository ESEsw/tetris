#include <stdio.h>

int set_tetris_table(int i, int j, int k)
{
	char tetris_table[21][10];

	tetris_table[i][j] = k;

	return 0;
}

int main()
{
	set_tetris_table(0, 0, 5);
	set_tetris_table(0, 1, 5);

	printf("%d %d", );
	return 0;
}
