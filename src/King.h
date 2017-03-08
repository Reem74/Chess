/*
 * King.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef KING_H_
#define KING_H_

class King: public Piece {
private:
	int directionOfRank[2] = { -1, -1 };
	int directionOfFile[2] = { -1, 1 };
public:
	King();
	King(Cell *cell, Color c);
	bool isValidMove(Cell *cell);
};

#endif /* KING_H_ */
