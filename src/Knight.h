/*
 * Knight.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef KNIGHT_H_
#define KNIGHT_H_

class Knight: public Piece {
private:
	int directionOfRank[2] = { -1, -1 };
	int directionOfFile[2] = { -1, 1 };
public:
	Knight();
	Knight(Cell *cell, Color c);
	bool isValidMove(Cell *cell);
};

#endif /* KNIGHT_H_ */
