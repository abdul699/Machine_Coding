#include "models/Player.cpp"
#include "models/Board.cpp"
#include "services/PlayerService.cpp"
#include "services/GameService.cpp"
#include<bits/stdc++.h>
using namespace std;

int main() {
	int sz = 3;
	Board br = Board(sz);
	string name1, name2;
	cout<<"Enter Player1 Name: ";
	cin>>name1;
	PlayerService *ps = new PlayerService();
	GameService *gs = new GameService();
	
	cout<<"Enter Player2 Name: ";
	cin>>name2;
	
	Player p1 = Player(name1, 'X');
	Player p2 = Player(name2, 'O');
	Player currentPlayer = p1;
	while(1) {
		if(gs->boardFill(br)) {
			gs->printGame(br); 
			cout<<"Match Turned into draw\n";
			break;
		}
		gs->printGame(br);
		int i, j;
		cout<<"Turn: "<<currentPlayer.getName()<<"\n";
		cout<<"enter row number and column number\n";
		cin>>i>>j;
		if(gs->validMove(i, j, br)) {
			if(br.getValueAt(i, j) != '-') {
				cout<<"The Cell is already filled. Please enter another move\n";
				continue;
			}
			else {
				br.setIndex(i, j, currentPlayer.getSign());
				if(ps->winCurrentPlayer(br)) {
					gs->printGame(br);
					cout<<currentPlayer.getName()<<" wins the Game"<<"\n";
					break;
				}
				if(currentPlayer.getName() == p1.getName()) {
					currentPlayer = p2;
				}
				else currentPlayer = p1;
			}	
		}
		else {
			cout<<"Enter the row and column number correctly\n";
			continue;
		}
	}
	return 0;
}
