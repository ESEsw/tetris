int drop(void);

//drop blocks until collisoned

int drop(void)
{
	while(!collision_test(DOWN))
	{
		move_block(DOWN);
	}

	return 0;
}
