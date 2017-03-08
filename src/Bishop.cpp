/*
 * Bishop.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */

#include "Bishop.h"

Bishop::Bishop() {
	current_cell = 0;
	color = NULL;
}

Bishop::Bishop(Cell *cell, Color c) {
	current_cell = cell;
	color = c;
}
bool Bishop::isValidMove(Cell *cell) {
	return false;
}

