int collision_test(int command)
{
	int i, j;
	int tempx, tempy;
	int oldx, oldy;
	int temp_block_state;
	char (*block_pointer)[4][4][4];
	char temp_tetris_table[21][10];

	oldx = tempx = x;
	oldy = tempy = y;
	temp_block_state = block_state;

	switch(command)
	{
		case LEFT : tempx--;
			break;
		case RIGHT : tempx++;
            break;
		case DOWN : tempy++;
            break;
		case ROTATE : temp_block_state++;
			temp_block_state %= 4;
            break;
	}

	for(i = 0; i < 21; i++)
	{
		for(j = 0; j < 10; j++)
		{
			temp_tetris_table[i][j] = tetris_table[i][j];
		}
	}

	for(i = 0, oldy = y; i < 4; i++, oldy++)
	{
		for(j = 0, oldx = x; j < 4; j++, oldx++)
		{
			if((*block_pointer)[block_state][i][j] == 1){
				temp_tetris_table[oldy][oldx] = 0;
			}
		}
	}

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(temp_tetris_table[tempy+i][tempx+j] == 1 && (*block_pointer)[temp_block_state][i][j]){
				return 1;
			}
		}
	}
	return 0;
}
