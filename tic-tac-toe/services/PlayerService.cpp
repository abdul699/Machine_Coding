#include "PlayerService.h"
#include "../models/Board.h"

bool PlayerService :: winCurrentPlayer(Board br) {
	for(int i=0; i<3; i++) {
			if(br.getValueAt(i, 0) == br.getValueAt(i, 1)  && br.getValueAt(i, 1)== br.getValueAt(i, 2) && br.getValueAt(i, 1) != '-') return true;   
	}
	// check column
	for(int i=0; i<3; i++) {
			if(br.getValueAt(0, i) == br.getValueAt(1, i)  && br.getValueAt(1, i)== br.getValueAt(2, i) && br.getValueAt(1, i) != '-') return true; 
	}
	// check diagonals
	if(br.getValueAt(0, 0) == br.getValueAt(1, 1)  && br.getValueAt(1, 1)  == br.getValueAt(2, 2)  && br.getValueAt(0, 0)  != '-') return true;
	if(br.getValueAt(0, 2)  == br.getValueAt(1, 1)  && br.getValueAt(1, 1) == br.getValueAt(2, 0) && br.getValueAt(1, 1) != '-') return true;
	return false;
}
