/*
 * Pawn.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */

#include <cmath>

#include "Pawn.h"
#include "Board.h"

Pawn::Pawn() {
	name = "Pawn";
	starting_cell = 0;
	current_cell = 0;
	color = NONE;
}

Pawn::Pawn(Cell *cell, Color c) : Piece(cell, c) {
	name = "Pawn";
	starting_cell = cell;

//	n_directions = 2;
//	rank_directions = new int[2];
//	file_directions = new int[2];
//
//	rank_directions[0] = -1;
//	file_directions[0] = 0;
//
//	rank_directions[0] = -1;
//	file_directions[0] = -1;
//
//	rank_directions[0] = -1;
//	file_directions[0] = 1;

}

bool Pawn::isValidMove(Board *board, Cell *to) {
	// TODO: promotions

	int sign = color == WHITE ? 1 : -1;

	if (to->getPiece()) {
		if (std::abs(to->getFile() - current_cell->getFile()) == 1 &&
				current_cell->getRank() - to->getRank() == 1 * sign) {
			return true;
		}
		return false;
	}
	if (to->getFile() == current_cell->getFile() && current_cell->getRank() - to->getRank() == 1 * sign) {
		return true;
	}
	if (to->getFile() == current_cell->getFile() &&
			current_cell->getRank() - to->getRank() == 2 * sign && current_cell == starting_cell) {
		return true;
	}
	return false;
}
