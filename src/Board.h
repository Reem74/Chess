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
#include "Color.h"

class Board {
private:
	static const int N = 8;
	Piece* pieces[N * N];
	Cell* cells[N][N];
public:
	Board();
	Piece** getPieces();
	bool move(Piece *piece, Cell *to);
	bool isValidCell(Cell *cell);
	bool capture(Piece *piece, Cell *to);
	bool isCaptured(Piece *piece);
	bool isSameColor(Color color1, Color color2);
};

#endif /* BOARD_H_ */
