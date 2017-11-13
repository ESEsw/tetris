// GAME START function

int game_start(void)
{
	static struct sigaction sa;
	static struct itimerval timer;
	time_t ptime;
	struct tm *t;
	FILE *fp = NULL;

	if(game == GAME_START)
	{
		init_tetris_table();
		// install timer, as the signal handler for SIGVTALRM
		memset(&sa,0,sizeof(sa));
		sa.sa_handler = &refresh;
		sigaction(SIGVTALRM, &sa,NULL);
		
		//Configure the timer to expire after 250msec
		timer.it_value.tv_sec = 0;
		timer.it_value.tv_usec = 1;

		// and every 250msec after that
		timer.it_interval.tv_sec = 0;
		timer.it_interval.tv_usec = 1;


	}



}
