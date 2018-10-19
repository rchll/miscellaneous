#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int rounds=0, maxrounds, win=0, lose=0, tie=0, com, pl;
	string player;
	bool validchoice,exit=false;

	//ENTER NO OF ROUNDS
	cout << "Enter number of rounds you wish to play: ";
	cin >> maxrounds;
/*	if (maxrounds > 30){
			cout << "Enter a smaller number of rounds: ";
			cin >> maxrounds;
	}
*/

	while (rounds < maxrounds){

		//PLAYER CHOICE
		while (validchoice == false){
			cout << "'rock', 'paper', or 'scissors'?" << endl;
			cout << "Enter your choice: ";
			cin >> player;

			if (player == "rock"){
				pl = 1;
				validchoice = true;
				rounds++;
			}
			else if (player == "paper"){
				pl = 2;
				validchoice = true;
				rounds++;
			}
			else if (player == "scissors"){
				pl = 3;
				validchoice = true;
				rounds++;
			}
			else if (player == "q"){
				maxrounds = rounds;
				validchoice = true;
				exit = true;
			}
		}

		validchoice = false;

		//COMPUTER CHOICE
		srand((unsigned) time(0));

		com = rand() % 3 + 1;

		if (exit == false){
		if (com == 1){
			cout << "The computer chose rock" << endl;
		}
		else if (com == 2){
			cout << "The computer chose paper" << endl;
		}
		else if (com == 3){
			cout << "The computer chose scissors" << endl;
		}


		//RESULT
		if (pl == com){
			cout << "It's a tie" << endl;
			tie++;
		}
		else if (pl-com == -2 || pl-com == 1){
			cout << "You win :D" << endl;
			win++;
		}
		else if (pl-com == -1 || pl-com == 2){
			cout << "You lose D:" << endl;
			lose++;
		}


		//RECORD SCORE
		cout << "You currently have " << win << " wins, " << lose << " losses and " << tie << " ties." << endl;
		cout << "You have gone through " << rounds << " out of " << maxrounds << " rounds." << endl;
		}
	}

	cout << "== GAME OVER ==" << endl;


	return 0;
}
