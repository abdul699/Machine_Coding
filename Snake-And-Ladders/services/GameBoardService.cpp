#include "GameBoardService.h"

bool GameBoardService :: hasCurrentPlayerWon(Player player) {
    int position = player.getPosition();
    if(position >= gameBoard.getSizeOfBoard()) return true;
    return false;
}

void GameBoardService :: MoveCurrentPlayer(Player &player, int diceValue) {
    int currentPosition = player.getPosition();
    int newPosition = currentPosition + diceValue;
    for(Snake snake : gameBoard.getSnakes()) {
        if(snake.getStart() == newPosition) {
            newPosition = snake.getEnd();
        }
    }

    for(Ladder ladder : gameBoard.getLadders()) {
        if(ladder.getStart() == newPosition) {
            newPosition = ladder.getEnd();
        }
    }
    player.setPosition(newPosition);
}

void GameBoardService :: setGame(list<Player> players, list<Ladder> ladders, list<Snake> snakes) {
        gameBoard.setLadders(ladders);
        gameBoard.setSnakes(snakes);
        gameBoard.setPlayers(players);
}

int GameBoardService :: getTotalValueAfterDiceRolls() {
    DiceService diceService;
    return diceService.rollDice();
}

void GameBoardService :: startGame() {
    list<Snake> snakes = gameBoard.getSnakes();
    list<Ladder> ladders = gameBoard.getLadders();
    list<Player> players = gameBoard.getPlayers();
    setGame(players, ladders, snakes);

    while(1) {
        Player currentPlayer = players.back();
        players.pop_back();
        int diceValue = getTotalValueAfterDiceRolls();
        cout<<"Player Turn: "<<currentPlayer.getName()<<"\n";
        cout<<"Current Position: "<<currentPlayer.getPosition()<<"\n";
        cout<<"Dice Value: "<<diceValue<<"\n";
        MoveCurrentPlayer(currentPlayer, diceValue);
        cout<<"New Position: "<<currentPlayer.getPosition()<<"\n";
        if(hasCurrentPlayerWon(currentPlayer)) {
            cout<<currentPlayer.getName()<<" Won the Game\n";
            break;
        }
        cout<<"\n--------------------------------------------------------\n";
        players.push_front(currentPlayer);
    }
}