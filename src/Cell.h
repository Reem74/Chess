/*
 * Cell.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef CELL_H_
#define CELL_H_

class Piece;

class Cell {
private:
	int rank;
	char file;
	Piece* piece;
	// need color?
public:
	Cell();
	void setRank(int r);
	void setFile(char f);
	void setPiece(Piece *p);
	int getRank();
	char getFile();
	Piece* getPiece();
};

#endif /* CELL_H_ */
