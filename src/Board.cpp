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

enum {
	BLACK_PAWN1,
	BLACK_PAWN2,
	BLACK_PAWN3,
	BLACK_PAWN4,
	BLACK_PAWN5,
	BLACK_PAWN6,
	BLACK_PAWN7,
	BLACK_PAWN8,
	BLACK_ROOK1,
	BLACK_ROOK2,
	BLACK_KNIGHT1,
	BLACK_KNIGHT2,
	BLACK_BISHOP1,
	BLACK_BISHOP2,
	BLACK_KING,
	BLACK_QUEEN,
	WHITE_PAWN1,
	WHITE_PAWN2,
	WHITE_PAWN3,
	WHITE_PAWN4,
	WHITE_PAWN5,
	WHITE_PAWN6,
	WHITE_PAWN7,
	WHITE_PAWN8,
	WHITE_ROOK1,
	WHITE_ROOK2,
	WHITE_KNIGHT1,
	WHITE_KNIGHT2,
	WHITE_BISHOP1,
	WHITE_BISHOP2,
	WHITE_KING,
	WHITE_QUEEN

};

Board::Board() {
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
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

	// rooks
	pieces[WHITE_ROOK1] = new Rook(cells[7][0], WHITE);
	pieces[WHITE_ROOK2] = new Rook(cells[7][7], WHITE);
	pieces[BLACK_ROOK1] = new Rook(cells[0][0], BLACK);
	pieces[BLACK_ROOK2] = new Rook(cells[0][7], BLACK);


	// knights
	pieces[WHITE_KNIGHT1] = new Knight(cells[7][1], WHITE);
	pieces[WHITE_KNIGHT2] = new Knight(cells[7][6], WHITE);
	pieces[BLACK_KNIGHT1] = new Knight(cells[0][1], BLACK);
	pieces[BLACK_KNIGHT2] = new Knight(cells[0][6], BLACK);

	// bishops
	pieces[WHITE_BISHOP1] = new Bishop(cells[7][2], WHITE);
	pieces[WHITE_BISHOP2] = new Bishop(cells[7][5], WHITE);
	pieces[BLACK_BISHOP1] = new Bishop(cells[0][2], BLACK);
	pieces[BLACK_BISHOP2] = new Bishop(cells[0][5], BLACK);

	// kings
	pieces[WHITE_KING] = new King(cells[7][4], WHITE);
	pieces[BLACK_KING] = new King(cells[0][3], BLACK);

	// queens
	pieces[WHITE_QUEEN] = new Queen(cells[7][3], WHITE);
	pieces[BLACK_QUEEN] = new Queen(cells[0][4], BLACK);

}

Piece** Board::getPieces() {
	return pieces;
}

bool Board::move(Piece *piece, Cell *to) {
	if (!piece->isValid(to)) {
		return false;
	}
	piece->getCurrentCell()->setRank(0);
	piece->getCurrentCell()->setFile(0);
	piece->setCurrentCell(to);
	return true;
}
bool Board::isValidCell(Cell *cell) {
	int N = 8;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
		if(cell == cells[i][j])
		return truel
	}
}
return false;
}
