#pragma once

#include <iostream>
#include <limits>
using namespace std;

class Player {
	string name;
	char sign;
	public:
		Player(string name, char sign);
		void setName(string name);
		string getName();
		void setSign(char sign);
		char getSign();
};
