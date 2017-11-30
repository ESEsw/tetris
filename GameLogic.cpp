#include "GameLogic.h"
#include <stdio.h>
#include "myio.h"
#include <time.h>

#define UP 65
#define DOWN 66
#define RIGHT 67
#define LEFT 68

GameLogic::GameLogic()
{
	for(int i = 0; i < HEIGHT + 1; i++)
	{
		board[i] = new char[WIDTH];
		
		for(int j = 0; j < WIDTH; j++)
		{
			board[i][j] = 0;
		}
	}
	for(int j = 0; j < WIDTH; j++)
	{
		board[HEIGHT][j] = 1;
	}
	
	isRun = true;
	Block::zero.x = 6;
	Block::zero.y = 2;
}

