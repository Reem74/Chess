/*
 * Piece.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef PIECES_H_
#define PIECES_H_

#include <string>

#include "Cell.h"
#include "Color.h"

class Board;

class Piece {
protected:
	std::string name;
	Cell* current_cell;
	Color color;

	// directions, initially from white's side
	// multiply by -1 to get directions for black's side
	int n_directions;
	int *rank_directions;
	int *file_directions;

	Piece();
	Piece(Cell* cell, Color c);
public:
	void changeCurrentCell(Cell *cell);
	void setColor(Color c);
	std::string getName();
	Color getColor();
	Cell* getCurrentCell();
	virtual bool isValidMove(Board *board, Cell *to) = 0;
	virtual ~Piece();
};

#endif /* PIECE_H_ */
