/*
 * Board.cpp
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */
#include "Board.h"
#include "Cell.h"
#include "Piece.h"
#include "Pawn.h"
#include "Rook.h"
#include"Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Queen.h"

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
	pieces[BLACK_PAWN1] = new Pawn;
	pieces[BLACK_PAWN2] = new Pawn;
	pieces[BLACK_PAWN3] = new Pawn;
	pieces[BLACK_PAWN4] = new Pawn;
	pieces[BLACK_PAWN5] = new Pawn;
	pieces[BLACK_PAWN6] = new Pawn;
	pieces[BLACK_PAWN7] = new Pawn;
	pieces[BLACK_PAWN8] = new Pawn;
	pieces[WHITE_PAWN1] = new Pawn;
	pieces[WHITE_PAWN2] = new Pawn;
	pieces[WHITE_PAWN3] = new Pawn;
	pieces[WHITE_PAWN4] = new Pawn;
	pieces[WHITE_PAWN5] = new Pawn;
	pieces[WHITE_PAWN6] = new Pawn;
	pieces[WHITE_PAWN7] = new Pawn;
	pieces[WHITE_PAWN8] = new Pawn;
	pieces[BLACK_ROOK1] = new Rook;
	pieces[BLACK_ROOK2] = new Rook;
	pieces[WHITE_ROOK1] = new Rook;
	pieces[WHITE_ROOK2] = new Rook;
	pieces[BLACK_KNIGHT1] = new Knight;
	pieces[BLACK_KNIGHT2] = new Knight;
	pieces[WHITE_KNIGHT1] = new Knight;
	pieces[WHITE_KNIGHT2] = new Knight;
	pieces[BLACK_BISHOP1] = new Bishop;
	pieces[BLACK_BISHOP2] = new Bishop;
	pieces[WHITE_BISHOP1] = new Bishop;
	pieces[WHITE_BISHOP2] = new Bishop;
	pieces[BLACK_KING] = new King;
	pieces[WHITE_KING] = new King;
	pieces[BLACK_QUEEN] = new Queen;
	pieces[WHITE_QUEEN] = new Queen;

}

bool Board::move(Piece *piece, Cell *to) {
	if (!piece->isValid(to))
		return false;
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
