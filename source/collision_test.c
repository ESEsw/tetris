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
}
