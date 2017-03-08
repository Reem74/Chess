/*
 * Piece.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef PIECES_H_
#define PIECES_H_

#include "Cell.h"
#include "Color.h"

class Cell;

class Piece {
protected:
	Cell *current_cell;
	Color color;
public:
	Piece();
	virtual bool isValidMove(Cell *cell) = 0; /// not here
	void setCurrentCell(Cell *cell);
	void setColor(Color c);
	Color getColor();
	Cell* getCurrentCell();

};

#endif /* PIECE_H_ */
