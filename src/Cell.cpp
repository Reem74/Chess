#include "Cell.h"
#include "Piece.h"

Cell::Cell() {
	rank = 0;
	file = 0;
	piece = 0;
}

void Cell::setRank(int r) {
	rank = r;
}

void Cell::setFile(char f) {
	file = f;
}

void Cell::setPiece(Piece *p) {
	piece = p;
}

int Cell::getRank() {
	return rank;
}

char Cell::getFile() {
	return file;
}

Piece* Cell::getPiece() {
	return piece;
}
