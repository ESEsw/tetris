#include "Block.h"

#ifndef GAMELOGIC_H_
#define GAMELOGIC_H_

static const int WIDTH = 10;
static const int HEIGHT = 18;

class GameLogic {
public:
	int score;
	bool isRun;
	int interval;
	int clearLines;
	char *board[HEIGHT];
	void start();
	void moveLeft();
	void moveRight();
	void moveDown();
	void transforse();
	void drop();
	void printBlock();
	GameLogic();
	virtual ~GameLogic();

private:
	Block block;
	Block next;
	bool isNotGameOver;
	void clearLine(int line);
	void check(Block block);
	bool isCollision();
	void refresh();
	void refreshNextBlock();
	void refreshPoint();
	void gameOver();
	void gameClear();
	void nextTurn();
	void nextLevel();
	int level;
};

#endif /* GAMELOGIC_H_ */

