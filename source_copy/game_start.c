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

		//Start a virtual timer. It counts down whenever this process is excuting
		setitimer(ITIMER_VIRTUAL, &timer,NULL);

		//Do busy work

		while(1)
		{
			if(game == GAME_END)
			{
				timer.it_value.tv.sec = 0;
				timer.it_value.tv_usec = 0;
				timer.it_interval.tv_sec = 0;
				timer.it_interval.tv_usec = 0;
				setitimer(ITIMER_VIRTUAL,&timer,NULL);

				//store as record file

				printf("\n\n final record : %ld ", point);
				printf("\n\n Enter the your name : ");
				scanf("%s%*c",temp_result.name);
				temp_result.point = point;

				if(temp_result.point >= best_point)
				{
					best_point = temp_result.point;
				}
				
				ptime = time(NULL);
				t = localtime(&ptime);

				temp_result.year = t->tm_year +1900;
				temp_result.month = t->tm_mon +1;
				temp_result.day = t->tm_mday;
				temp_result.hour = t->tm_hour;
				temp_result.min = t->tm_min;

				fp = open("result","ab");
				fseek(fp,1,SEEK_END);
				fwrite(&temp_result,sizeof(struct result),1,fp);
				fclose(fp);

				x=3,y=0;
				point = 0;
				return 1;
			}
		}


	}


	return 0;
}
