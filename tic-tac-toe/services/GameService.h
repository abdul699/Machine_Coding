#include "../models/Board.h"
#include <bits/stdc++.h>
#include <limits>
using namespace std;

class GameService {
	public: 
		void printGame(Board);
		bool boardFill(Board);
		bool validMove(int, int , Board);
		
};
