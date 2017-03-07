/*
 * Board.h
 *
 *  Created on: Mar 5, 2017
 *      Author: reem
 */

#ifndef BOARD_H_
#define BOARD_H_

#include "Piece.h"
#include "Cell.h"

class Board {
private:
	const int N = 8;
	Piece* pieces[N * N];
	Cell* cells[N][N];
public:
	Board();
	Piece** getPieces();
	bool move(Piece piece, Cell to);
	bool isValidCell(Cell *cell);
	bool capture(Piece peice);

};

#endif /* BOARD_H_ */
