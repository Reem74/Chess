/*
 * Pawn.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */
#include "Pawn.h"

Pawn::Pawn() {
	starting_cell = 0;
	current_cell = 0;
	color = NULL;
}

Pawn::Pawn(Cell *cell, Color c) {
	starting_cell = cell;
	current_cell = cell;
	color = c;
}

Cell *Pawn::getStartingCell() {
	return starting_cell;
}

bool Pawn::isValidMove(Cell *cell) {
	if (getCurrentCell()->getFile() == cell->getFile()
			&& getCurrentCell()->getRank() + 1 == cell->getRank()
			&& cell->getPiece() == 0) {
		return true;
	}

	if (getCurrentCell()->getRank() + 2 == cell->getRank()
			&& starting_cell == getCurrentCell() && cell->getPiece() == 0) {
		return true;
	}

	for (int i = 0; i < 2; i++) {
		if (getCurrentCell()->getRank() + directionOfRank[i] == cell->getRank()
				&& getCurrentCell()->getFile() + directionOfFile[i]
						== cell->getFile() && cell->getPiece() != 0) {
			return true;
		}
	}

	return false;
}
