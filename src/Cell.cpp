#include "Cell.h"

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
