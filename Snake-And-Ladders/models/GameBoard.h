#pragma once
#include "Snake.h"
#include "Ladder.h"
#include "Player.h"
#include<list>

using namespace std;


class GameBoard {
    list<Player> players;
    list<Snake> snakes;
    list<Ladder> ladders;
    int sizeOfBoard;
    const int DEFAULT_SIZEOF_BOARD = 100;

    public:
        GameBoard(int size);

        GameBoard();

        int getSizeOfBoard();

        void setSizeOfBoard(int size);

        list<Player> getPlayers();

        list<Snake> getSnakes();

        list<Ladder> getLadders();

        void setLadders(list<Ladder> ladders);

        void setSnakes(list<Snake> snakes);

        void setPlayers(list<Player> players);
};