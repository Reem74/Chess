/*
 * Bishop.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef BISHOP_H_
#define BISHOP_H_

#include "Piece.h"

class Bishop: public Piece {
private:
	const int directionOfRank[2] = { -1, -1 };
	const int directionOfFile[2] = { -1, 1 };
public:
	Bishop();
	Bishop(Cell *cell, Color c);
	bool isValidMove(Cell *cell);
};

#endif /* BISHOP_H_ */
