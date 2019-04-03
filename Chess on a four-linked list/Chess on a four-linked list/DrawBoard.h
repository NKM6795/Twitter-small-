#pragma once


#include "FiguresMoving.h"

class DrawBoard
{
private:
	int offset;
	int sizeOfBoard;

	Texture figureTexture;
	Sprite figureSprite;

	Texture changeTexture;
	Sprite changeSprite;

	Texture allotmentTexture;
	Sprite allotmentSprite;

	Texture freeCellTexture;
	Sprite freeCellSprite;

	Texture enemyTexture;
	Sprite enemySprite;


public:
	bool change;
	
	void setInformation(int sizeOfBoardForClass, int offsetForClass);
	void draw(RenderTexture &textureForWindow, int heightOfTheScrean, int widthOfTheScrean, int sizeOfCell, Cell *head, Vector2i allotment, shared_ptr<SinglyNode> headForFreeCell, int lengthForFreeCell, shared_ptr<SinglyNode> headForEnemy, int lengthForEnemy, int turn);

};