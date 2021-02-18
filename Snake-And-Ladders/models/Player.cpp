#include "Player.h"

Player :: Player(string name, int position) {
    this->name = name;
    this->position = position;
}

string Player :: getName() {
    return name;
}
int Player :: getPosition() {
    return position;
}
void Player :: setName(string name) {
    this->name = name;
}

void Player :: setPosition(int position) {
    this->position = position;
}