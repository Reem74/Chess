/*
 * Rook.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */

#include "Rook.h"

Rook::Rook() {
	current_cell = 0;
	color = NONE;
}

Rook::Rook(Cell *cell, Color c) {
	current_cell = cell;
	color = c;
}
bool Rook::isValidMove(Cell *cell) {
	return false;
}
