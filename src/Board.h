/*
 * Board.h
 *
 *  Created on: Mar 5, 2017
 *      Author: reem
 */

#ifndef INCLUDE_BOARD_H_
#define INCLUDE_BOARD_H_
#include "Piece.h"
#include "Cell.h"

class Board {
private:
	Piece* pieces[32];
public:
	Board();
	bool move(Piece piece, Cell to);
	bool isValidCell(Cell cell);
	bool capture(Piece peice);

};

#endif /* INCLUDE_BOARD_H_ */
