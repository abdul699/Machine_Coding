#include "Player.h"

Player :: Player(string name, char sign) {
	this->sign = sign;
	this->name = name;
}

void Player :: setName(string name) {
	this->name = name;
}

string Player ::  getName() {
	return this->name;
}

void Player ::  setSign(char sign) {
	this->sign = sign;
}

char Player ::  getSign() {
	return this->sign;
}
