/*
 * Chess.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: mahmoud
 */

#include "Chess.h"

#include <iostream>
#include <typeinfo>

Chess::Chess() {
	board = new Board;
	current_color = WHITE;
}

Chess::~Chess() {
	delete board;
}

void Chess::play() {
	// print intro
	bool checkmate = false;
	while (!checkmate) {
		if (makeMove()) {

		}
		switchColor();
	}
}

void Chess::switchColor() {
	if (current_color == WHITE) {
		current_color = BLACK;
	} else {
		current_color = WHITE;
	}
}

char Chess::getPieceSymbol(Cell* cell) {
	if (!cell->getPiece()) {
		return '.';
	}
	if (cell->getPiece()->getColor() == BLACK) {
		return tolower(cell->getPiece()->getName()[0]);
	}
	return cell->getPiece()->getName()[0];
}

void Chess::printBoard() {
	const int N = 8;
	char cells[N][N];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cells[i][j] = getPieceSymbol(board->getCell(i, j));
		}
	}
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			std::cout << cells[i][j];
			if (j + 1 < N) {
				std::cout << ' ';
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

bool Chess::makeMove() {
	std::string color;
	if (current_color == WHITE) {
		color = "White";
	} else {
		color = "Black";
	}

	std::cout << "--- " << color << "\'s turn ---\n" << std::endl;

	// print total number of turns

	printBoard();

	std::cout << "Choose a piece to move:" << std::endl;


	return true;
}
