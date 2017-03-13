/*
 * Chess.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: mahmoud
 */

#include "Chess.h"

#include <iostream>

Chess::Chess() {
	board = new Board;
	current_color = WHITE;
}

Chess::~Chess() {
	delete board;
}

void Chess::play() {
	std::cout << "Welcome to R.M. Chess 1.0!" << std::endl;

	bool gameOver = false;
	while (!gameOver) {
		std::cout << "\nMove #" << number_of_moves + 1 << std::endl;
		std::cout << "\n--- " << (current_color == WHITE ? "White" : "Black") << "\'s turn ---\n" << std::endl;

		printBoard();

		if (!makeMove()) {
			return;
		}

		switchColor();
	}

	std::cout << "\nGame Over!\n" << std::endl;
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
		std::cout << N - i << '|';
		for (int j = 0; j < N; ++j) {
			std::cout << ' ' << cells[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "   ---------------\n   ";
	for (int i = 0; i < N; ++i) {
		std::cout << (char)('a' + i);
		if (i + 1 < N) {
			std::cout << ' ';
		}
	}
	std::cout << std::endl << std::endl;
}

bool Chess::makeMove() {
	while (true) {
		std::cout << "Choose the cell of the piece you want to move:" << std::endl;
		std::string from;
		getline(std::cin, from);

		if (from == "exit") {
			return false;
		}

		std::cout << "Choose the cell you want to move the piece to:" << std::endl;
		std::string to;
		getline(std::cin, to);

		if (board->move(current_color, from, to)) {
			break;
		}
		std::cout << "\nError. Invalid move.\n" << std::endl;
	}
	++number_of_moves;
	return true;
}
