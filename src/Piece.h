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
private:
	Cell *current_cell;
	Color color;
public:
	Piece();
	Piece(Cell *cell, Color color);
	void setCurrentCell(Cell *cell);
	void setColor(Color color);
	Color getColor();
	Cell* getCurrentCell();
	bool isValidMove(Cell *cell);
};

#endif /* PIECE_H_ */
