/*
 *
 *  Created on: Mar 5, 2017
 *      Author: mahmoud
 */

#ifndef GAME_H_
#define GAME_H_

#include "Board.h"

enum Color {
	WHITE, BLACK
};

class Chess {
private:
	Board* board;
	Color current_color;

	void switchColor();
	void makeMove();
	void printBoard();
public:
	Chess();
	~Chess();
	void play();
};

#endif /* GAME_H_ */
