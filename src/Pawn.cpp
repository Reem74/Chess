/*
 * Pawn.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */

#include "Pawn.h"

Pawn::Pawn() {
	name = "Pawn";
	starting_cell = 0;
	current_cell = 0;
	color = NONE;
}

Pawn::Pawn(Cell *cell, Color c) : Piece(cell, c) {
	name = "Pawn";
	starting_cell = cell;
	// directions and n_directions
}

Cell *Pawn::getStartingCell() {
	return starting_cell;
}
