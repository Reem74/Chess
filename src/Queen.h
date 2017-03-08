/*
 * Queen.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef QUEEN_H_
#define QUEEN_H_

#include "Piece.h"

class Queen: public Piece {
private:
	int directionOfRank[2] = { -1, -1 };
	int directionOfFile[2] = { -1, 1 };
public:
	Queen();
	Queen(Cell *cell, Color c);
	bool isValidMove(Cell *cell);
};

#endif /* QUEEN_H_ */
