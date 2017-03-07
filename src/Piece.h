/*
 * Piece.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef PIECES_H_
#define PIECES_H_

#include "Cell.h"

class Piece {
private:
	Cell current_cell;
public:
	bool isValid(Cell to);
	void setCurrentCell(Cell cell);
	Cell getCurrentCell();
};

#endif /* PIECE_H_ */
