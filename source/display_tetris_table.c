#define I_BLOCK
#define T_BLOCK
#define S_BLOCK
#define Z_BLOCK
#define L_BLOCK
#define J_BLOCK
#define O_BLOCK


int display_tetris_table()
{
	int i, j;
	char (*block_pointer)[4][4][4] = NULL;

	switch(next_block_number)
	{
		case I_BLOCK: block_pointer = &i_block;
			break;
		case T_BLOCK: block_pointer = &t_block;
            break;
		case S_BLOCK: block_pointer = &s_block;
            break;
		case Z_BLOCK: block_pointer = &z_block;
            break;
		case L_BLOCK: block_pointer = &l_block;
            break;
		case J_BLOCK: block_pointer = &j_block;
            break;
		case O_BLOCK: block_pointer = &o_block;
            break;
	}

	system("clear");

	printf("\n\n Next Block\n");

	for(i = 0; i < 4; i++)
	{
		printf("\n");
		for(j = 0; j < 4; j++)
		{
			if((*block_pointer)[0][i][j] == 1) printf("#");
			else if((*block_pointer)[0][i][j] == 0) printf(" ");
		}
	}
}
