/*
 * Chess.h
 *
 *  Created on: Mar 5, 2017
 *      Author: mahmoud
 */

#ifndef GAME_H_
#define GAME_H_

#include "Board.h"
#include "Color.h"

class Chess {
private:
	Board* board;
	Color current_color;
	int number_of_moves;

	void switchColor();
	void printBoard();
	char getPieceSymbol(Cell* cell);
	void makeMove();
public:
	Chess();
	~Chess();
	void play();
};

#endif /* GAME_H_ */
