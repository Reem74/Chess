/*
 * Board.cpp
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#include "Board.h"
#include "Cell.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"
#include "Color.h"

Board::Board() {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cells[i][j] = new Cell;
			cells[i][j]->setRank(i);
			cells[i][j]->setFile(j + 'a');
		}
	}

	// pawns
	for (int i = WHITE_PAWN1; i <= WHITE_PAWN8; ++i) {
		int idx = i - WHITE_PAWN1;
		pieces[i] = new Pawn(cells[6][idx], WHITE);
	}
	for (int i = BLACK_PAWN1; i <= BLACK_PAWN8; ++i) {
		int idx = i - BLACK_PAWN1;
		pieces[i] = new Pawn(cells[1][idx], BLACK);
	}

//	// rooks
//	pieces[WHITE_ROOK1] = new Rook(cells[7][0], WHITE);
//	pieces[WHITE_ROOK2] = new Rook(cells[7][7], WHITE);
//	pieces[BLACK_ROOK1] = new Rook(cells[0][0], BLACK);
//	pieces[BLACK_ROOK2] = new Rook(cells[0][7], BLACK);
//
//	// knights
//	pieces[WHITE_KNIGHT1] = new Knight(cells[7][1], WHITE);
//	pieces[WHITE_KNIGHT2] = new Knight(cells[7][6], WHITE);
//	pieces[BLACK_KNIGHT1] = new Knight(cells[0][1], BLACK);
//	pieces[BLACK_KNIGHT2] = new Knight(cells[0][6], BLACK);
//
//	// bishops
//	pieces[WHITE_BISHOP1] = new Bishop(cells[7][2], WHITE);
//	pieces[WHITE_BISHOP2] = new Bishop(cells[7][5], WHITE);
//	pieces[BLACK_BISHOP1] = new Bishop(cells[0][2], BLACK);
//	pieces[BLACK_BISHOP2] = new Bishop(cells[0][5], BLACK);
//
//	// kings
//	pieces[WHITE_KING] = new King(cells[7][4], WHITE);
//	pieces[BLACK_KING] = new King(cells[0][3], BLACK);
//
//	// queens
//	pieces[WHITE_QUEEN] = new Queen(cells[7][3], WHITE);
//	pieces[BLACK_QUEEN] = new Queen(cells[0][4], BLACK);

}

Piece** Board::getPieces() {
	return pieces;
}

Cell* Board::getCell(int i, int j) {
	return cells[i][j];
}

bool Board::isValidCellString(std::string cell) {
	for (size_t i = 0; i < cell.size(); ++i) {
		if (cell[i] == ' ') {
			cell.erase(i, 1);
			--i;
		}
	}
	return ('a' <= cell[0] && cell[0] <= 'h') && ('1' <= cell[1] && cell[1] <= '9');
}

bool Board::move(Color move_color, std::string from, std::string to) {
	from[1] = N + '1' - from[1] + '1' - 1;
	to[1] = N + '1' - to[1] + '1' - 1;
	return isValidCellString(from) && isValidCellString(to) &&
			cells[from[1] - '1'][from[0] - 'a']->getPiece() &&
			cells[from[1] - '1'][from[0] - 'a']->getPiece()->getColor() == move_color &&
			move(cells[from[1] - '1'][from[0] - 'a']->getPiece(), cells[to[1] - '1'][to[0] - 'a']);
}

bool Board::move(Piece *piece, Cell *to) {
	// I think isCaptured() is redundant
	if (isCaptured(piece) || !piece->isValidMove(this, to) || !capture(piece, to)) {
		return false;
	}
	piece->changeCurrentCell(to);
	return true;
}

bool Board::capture(Piece *piece, Cell *captured_cell) {
	if (captured_cell->getPiece() == 0) {
		return true;
	}
	if (isSameColor(piece, captured_cell->getPiece())) {
		return false;
	}
	for (int i = 0; i < 4 * N; i++) {
		if (pieces[i] == piece) {
			piece->changeCurrentCell(0);
			break;
		}
	}
	return true;
}

bool Board::isCaptured(Piece *piece) {
	return piece->getCurrentCell() == 0;
}

bool Board::isSameColor(Piece *piece1, Piece *piece2) {
	return piece1->getColor() == piece2->getColor();
}

Board::~Board() {
	for (int i = 0; i < 4 * N; ++i) {
		delete pieces[i];
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			delete cells[i][j];
		}
	}
}
