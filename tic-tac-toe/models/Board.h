#pragma once

#include <bits/stdc++.h>
#include <limits>
using namespace std;


class Board {
	vector<vector<char>> board;
	public:
		Board(int sz);

		void setIndex(int i, int j, char sign);
		
		char getValueAt(int i, int j);
		
		int getBoardSize();
};
