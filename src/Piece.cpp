/*
 * Piece.cpp
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */
#include "Piece.h"

Piece::Piece() {
	current_cell = 0;
	color = 0;
}

void Piece::setCurrentCell(Cell *cell) {
	current_cell = cell;
}

void Piece::setColor(Color c) {
	color = c;
}

Color Piece::getColor() {
	return color;
}

Cell* Piece::getCurrentCell() {
	return current_cell;
}

