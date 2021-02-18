#pragma once
#include "../models/GameBoard.h"
// #include "../models/Player.h"
// #include "../models/Snake.h"
// #include "../models/Ladder.h"
#include "DiceService.h"

using namespace std;


class GameBoardService {
    GameBoard gameBoard = GameBoard();
    DiceService diceService = DiceService();
    public:
        bool hasCurrentPlayerWon(Player player);

        void MoveCurrentPlayer(Player &player, int diceValue);

        void setGame(list<Player> players, list<Ladder> ladders, list<Snake> snakes);

        int getTotalValueAfterDiceRolls();

        void startGame();

};
