/*
 * Knight.cpp
 *
 *  Created on: Mar 8, 2017
 *      Author: reem
 */

#include "Knight.h"

Knight::Knight() {
	current_cell = 0;
	color = 0;
}

Knight::Knight(Cell *cell, Color c) {
	current_cell = cell;
	color = c;
}
bool Knight::isValidMove(Cell *cell) {
	return false;
}

