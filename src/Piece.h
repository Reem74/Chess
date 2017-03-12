/*
 * Piece.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef PIECES_H_
#define PIECES_H_

#include "Cell.h"
#include <string>

#include "Color.h"

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
	int* getRankDirections();
	int* getFileDirections();
	~Piece();
};

#endif /* PIECE_H_ */
