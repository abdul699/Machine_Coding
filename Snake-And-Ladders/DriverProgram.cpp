#pragma once
// #include "models/Ladder.h"
// #include "models/Snake.h"
// #include "models/Player.h"
// #include "models/GameBoard.h"
// #include "services/DiceService.h"
#include "services/GameBoardService.h"
#include<time.h>
using namespace std;

int main() {
    int snake, ladder, player;
    list<Snake> snakes;
    list<Ladder> ladders;
    list<Player> players;
    srand(time(0));

    // enter snakes
    cout<<"Enter the number of snakes\n";
    cin>>snake;
    for(int i=0; i<snake; i++) {
        int s, e;
        cout<<"Enter Snake start and end number\n";
        cin>>s>>e;
        snakes.push_back(Snake(s, e));
    }

    //enter ladders
    cout<<"Enter the number of ladders\n";
    cin>>ladder;
    for(int i=0; i<ladder; i++) {
        int s, e;
        cout<<"Enter Ladder start and end number\n";
        cin>>s>>e;
        ladders.push_back(Ladder(s, e));
    }

    cout<<"Enter the number of Players\n";
    cin>>player;
    for(int i=0; i<player; i++) {
        string playerName;
        cout<<"Enter Player name\n";
        cin>>playerName;
        Player newPlayer = Player(playerName, 0);
        players.push_back(newPlayer);
    }
    cout<<"\n------------------------------------------------\n";
    GameBoardService gameBoardService = GameBoardService();
    gameBoardService.setGame(players, ladders, snakes);
    gameBoardService.startGame();
    return 0;
}
