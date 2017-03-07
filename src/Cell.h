/*
 * Cell.h
 *
 *  Created on: Mar 7, 2017
 *      Author: reem
 */

#ifndef CELL_H_
#define CELL_H_

class Cell {
private:
	int rank;
	char file;
public:
	void setRank(int r);
	void setFile(char f);
	int getRank();
	char getFile();

};

#endif /* CELL_H_ */
