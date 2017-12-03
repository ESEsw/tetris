#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

struct termios initial_settings, new_settings;

int main(int argc,char *argv[])
{
	srand(tume(NULL));

	new_setting = initial_setting;
	new_settings.c_lflag &= ~ICANON;
	new_settings.c_lflag &= ~ECHO;
	new_settings.c_lflag &= ~ISIG;
	new_settings.c_cc[VMIN] = 0;
	new_settings.c_cc[VTIME] = 0;
	tcsetattr(0, TCSANOW, &new_settings);
	GameLogic game = GameLogic();

	system("clear");
	//	sendScore(100);
	while (game.isRun) {
		game.start();
	}

	tcsetattr(0, TCSANOW, &initial_settings);
	printf("\033[0m");
	system("clear");
	return 0;

	ststem(clear);


}
