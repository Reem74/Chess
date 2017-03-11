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
	Piece* pieces[4 * N];
	Cell* cells[N][N];

	enum {
		BLACK_PAWN1,
		BLACK_PAWN2,
		BLACK_PAWN3,
		BLACK_PAWN4,
		BLACK_PAWN5,
		BLACK_PAWN6,
		BLACK_PAWN7,
		BLACK_PAWN8,
		BLACK_ROOK1,
		BLACK_ROOK2,
		BLACK_KNIGHT1,
		BLACK_KNIGHT2,
		BLACK_BISHOP1,
		BLACK_BISHOP2,
		BLACK_KING,
		BLACK_QUEEN,
		WHITE_PAWN1,
		WHITE_PAWN2,
		WHITE_PAWN3,
		WHITE_PAWN4,
		WHITE_PAWN5,
		WHITE_PAWN6,
		WHITE_PAWN7,
		WHITE_PAWN8,
		WHITE_ROOK1,
		WHITE_ROOK2,
		WHITE_KNIGHT1,
		WHITE_KNIGHT2,
		WHITE_BISHOP1,
		WHITE_BISHOP2,
		WHITE_KING,
		WHITE_QUEEN
	};
public:
	Board();
	Piece** getPieces();
	Cell* getCell(int i, int j);
	bool move(Piece *piece, Cell *to);
	bool isValidCell(Cell *cell);
	bool isValidMove(Piece *piece, Cell *to);
	bool capture(Piece *piece, Cell *to);
	bool isCaptured(Piece *piece);
	bool isSameColor(Color color1, Color color2);
	~Board();
};

#endif /* BOARD_H_ */
