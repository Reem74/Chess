/*
 * Piece.cpp
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#include "Piece.h"

Piece::Piece() {
	current_cell = 0;
	color = NONE;
	n_directions = 0;
	rank_directions = 0;
	file_directions = 0;
}

Piece::Piece(Cell* cell, Color c) {
	current_cell = cell;
	color = c;
	cell->setPiece(this);
}

void Piece::changeCurrentCell(Cell *cell) {
	if (current_cell) {
		current_cell->setPiece(0);
	}
	current_cell = cell;
	if (current_cell) {
		current_cell->setPiece(this);
	}
}

void Piece::setColor(Color c) {
	color = c;
}

std::string Piece::getName() {
	return name;
}

Color Piece::getColor() {
	return color;
}

Cell* Piece::getCurrentCell() {
	return current_cell;
}

int* Piece::getFileDirections() {
	return file_directions;
}

int* Piece::getRankDirections() {
	return rank_directions;
}

Piece::~Piece() {
	delete current_cell;
	delete[] rank_directions;
	delete[] file_directions;
}

