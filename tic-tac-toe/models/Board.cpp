#include "Board.h"

Board :: Board(int sz) {
	board.assign(sz, vector<char> (sz, '-'));
}

void Board :: setIndex(int i, int j, char sign) {
	this->board[i][j] = sign;
}

char Board :: getValueAt(int i, int j) {
	return this->board[i][j];
}

int Board :: getBoardSize() {
	return (int)this->board.size();
}
