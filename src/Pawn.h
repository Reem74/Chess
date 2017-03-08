/*
 * Pawn.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef PAWN_H_
#define PAWN_H_

#include "Piece.h"

class Pawn: public Piece {
private:
	Cell *starting_cell;
	int directionOfRank[2] = { -1, -1 };
	int directionOfFile[2] = { -1, 1 };

public:
	Pawn();
	Pawn(Cell *cell, Color c);
	Cell *getStartingCell();
	bool isValidMove(Cell *cell);
};

#endif /* PAWN_H_ */
