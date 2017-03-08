/*
 * King.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */
#include "King.h"

King::King() {
	current_cell = 0;
	color = 0;
}

King::King(Cell *cell, Color c) {
	current_cell = cell;
	color = c;
}
bool King::isValidMove(Cell *cell) {
	return false;
}

