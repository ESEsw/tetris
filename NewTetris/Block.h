#define BLOCK_H

struct Point{
	int x,y;
}

class Block{
	private:
	static const int LEFT,RIGHT,BOTTOM;
	int stat;
	Point prev;
	void init(int type);
	public:
	static const char * BLOCK;
	static const char * CLEAR;
	static Point zero;

	Point current;
	int left;
	int right;
	int bottom;
	int color;
	


}
