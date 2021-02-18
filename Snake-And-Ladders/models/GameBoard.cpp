#include "GameBoard.h"

GameBoard :: GameBoard(int size) {
    this->sizeOfBoard = size;
}

GameBoard :: GameBoard() {
    this->sizeOfBoard = DEFAULT_SIZEOF_BOARD;
}

int GameBoard :: getSizeOfBoard() {
    return sizeOfBoard;
}

void GameBoard :: setSizeOfBoard(int size) {
    this->sizeOfBoard = size;
}

list<Player> GameBoard :: getPlayers()
{
    return players;
}

list<Snake> GameBoard :: getSnakes()
{
    return snakes;
}

list<Ladder> GameBoard :: getLadders()
{
    return ladders;
}

void GameBoard :: setLadders(list<Ladder> ladders) {
    this->ladders = ladders;
}

void GameBoard :: setSnakes(list<Snake> snakes) {
    this->snakes = snakes;
}

void GameBoard :: setPlayers(list<Player> players) {
    this->players = players;
}