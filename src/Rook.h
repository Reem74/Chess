/*
 * Rook.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef ROOK_H_
#define ROOK_H_

#include "Piece.h"

class Rook: public Piece {
private:
	int directionOfRank[2] = { -1, -1 };
	int directionOfFile[2] = { -1, 1 };
public:
	Rook();
	Rook(Cell *cell, Color c);
	bool isValidMove(Cell *cell);
};

#endif /* ROOK_H_ */
