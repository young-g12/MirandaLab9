#ifndef PLAYERH
#define PLAYERH
class player
{
public:
	player(int HEIGHT);
	~player();
	void DrawPlayer();
	void MoveUp();
	void MoveDown(int HEIGHT);
	void MoveLeft();
	void MoveRight();
	int getBoundX(){return boundx;}
	int getBoundY(){return boundy;}
	int getX() { return x; }
	int getY() { return y; }
	void updateImage();

	int getLives() { return lives; }

	void addKill()
	{
		score++;
	}

	int getScore()
	{
		return score;
	}

	void removeLife()
	{
		lives--;

		if (lives < 0)
			lives = 0;

		updateImage();
	}
private:
	int x;
	int y;
	int lives;
	int speed;
	int boundx;
	int boundy;
	int score;
	ALLEGRO_BITMAP* images[5];
	int imageIndex;
};
#endif
