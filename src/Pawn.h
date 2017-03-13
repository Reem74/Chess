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
public:
	Pawn();
	Pawn(Cell *cell, Color c);
	virtual bool isValidMove(Board *board, Cell *to);
};

#endif /* PAWN_H_ */
