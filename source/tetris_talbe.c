char *set_tetris_table(int i, int j, int k)
{
	char tetris_table[21][10];

	tetris_table[i][j] = k;

	return &tetris_table;
}
