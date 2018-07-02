#include "global.h"




Hero CreateHero(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int curFrameIndex, int maxFrameSize)
{
	Hero hero;
	hero.hBmp = hBmp;
	hero.pos.x = posX;
	hero.pos.y = posY;
	hero.vel.x = 0;
	hero.vel.y = 0;
	hero.acceleration.x=0;
	hero.acceleration.y=0;
	hero.mass = 1;
	hero.size.cx = sizeX;
	hero.size.cy = sizeY;
	hero.curFrameIndex = curFrameIndex;
	hero.maxFrameSize = maxFrameSize;
	return hero;
}

GameButton CreateGameButton(LONG posX, LONG posY, LONG sizeX, LONG sizeY, HBITMAP hBmp, int status)
{
	GameButton gameButton;
	gameButton.pos.x = posX;
	gameButton.pos.y = posY;
	gameButton.size.cx = sizeX;
	gameButton.size.cy = sizeY;
	gameButton.hBmp = hBmp;
	gameButton.status = status;
	return gameButton;
}

Terrian CreateTerrian(LONG pos1X, LONG pos1Y, LONG pos2X, LONG pos2Y,
	HBITMAP hBlockBmp)
{
	Terrian terrian;
	terrian.pos1.x = pos1X;
	terrian.pos1.y = pos1Y;
	terrian.pos2.x = pos2X;
	terrian.pos2.y = pos2Y;
	terrian.hBmp = hBlockBmp;
	return terrian;
}

