int check_one_line(void)
{
	int i,j;
	int ti,tj;
	int line_hole;


	
	for(i=19;i>0;i--)
	{
		line_hole = 0;

		for(j=1;j<9;j++)
		{
			if(tetris_table[i][j] == 0)
			{
				line_hole = 1;
			}
		}
		
		if(line_hole == 0)
		{
			point += 1000;
			for(ti=i;ti>0;ti--)
			{
				for(tj=0;tj<9;tj++)
				{
					tetris_table[i][j] = tetris_table[ti-1][tj];
				}
			}
		}
	}


	return 0;
}
