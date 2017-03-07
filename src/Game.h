/*
 *
 *  Created on: Mar 5, 2017
 *      Author: mahmoud
 */

#ifndef INCLUDE_GAME_H_
#define INCLUDE_GAME_H_

#include "Board.h"

enum Color {
	WHITE, BLACK
};

class Game {
private:
	Board* board;
	Color current_color;
public:
	Game();
	int play();
	~Game();
};

#endif /* INCLUDE_GAME_H_ */
