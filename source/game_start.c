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

		
		nclude <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
        int fd;
        if (argc != 2)
        {
                fprintf(stderr,"usage: opentest filename\n");
                exit(0);
        }
        //put your code
        fd = open(argv[1],O_RDONLY);

        if( fd == -1) // open failure
        {
                perror("error!\n");
                exit(0);
        }
        else //open success
        {
                printf("open %s successful\n",argv[1]);
        }

        return 0;


	}



}
