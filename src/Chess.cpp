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

void Chess::printBoard() {
	const int N = 8;
	char cells[N][N];
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cells[i][j] = '.';
		}
	}
	for (int i = 0; i < N; ++i) {

	}
}

void Chess::makeMove() {
	std::string color;
	if (current_color == WHITE) {
		color = "White";
	} else {
		color = "Black";
	}

	std::cout << "--- " << color << "\'s turn ---\n" << std::endl;

	printBoard();

	std::cout << "Choose a piece to move:" << std::endl;



}
