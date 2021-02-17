#include "GameService.h"
#include "../models/Board.h"

void GameService :: printGame(Board br) {
	for(int i=0; i<br.getBoardSize(); i++) {
		for(int j=0; j<br.getBoardSize(); j++) {
			cout<<br.getValueAt(i, j)<<"\t";
		}
		cout<<"\n\n";
	}
}

bool GameService :: boardFill(Board br) {
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(br.getValueAt(i, j) == '-') return false;
		}
	}
	return true;
}

bool GameService :: validMove(int i, int j, Board br) {
	int sz = br.getBoardSize();
	if(i < 0 || i >= sz || j < 0 || j >= sz) return false;
	return true;
}


