#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main() {
	int rounds=0, roundsmax, win=0, lose=0, tie=0;
	string opponent, p1choice, p2choice;
	string choices[] = {"rock","paper","scissors","lizard","spock"};
	bool p1valid=false, p2valid=false;

	//PLAYER(S)
	cout << "play against p2 or com?: ";
	cin >> opponent;

	//ROUNDS
	cout << "no of rounds: ";
	cin >> roundsmax;
	while(rounds < roundsmax){

		//P1
		while(p1valid == false){
			cout << "p1 choice: ";
			cin >> p1choice;
			for(int i=0; i<5; i++){
				if(p1choice == choices[i]){
					p1valid = true;
				}
			}
			if(p1choice == "rules"){
				cout << "Scissors cuts Paper\nPaper covers Rock\nRock crushes Lizard\nLizard poisons Spock\nSpock smashes Scissors\nScissors decapitates Lizard\nLizard eats Paper\nPaper disproves Spock\nSpock vaporizes Rock\nRock crushes Scissors" << endl;
			}
		}

		//P2
		if(opponent == "p2"){
			while (p2valid == false){
				cout << "p2 choice: ";
				cin >> p2choice;
				for(int i=0; i<5; i++){
					if(p2choice == choices[i]){
						p2valid = true;
					}
				}
			}
		}

		//COM
		if(opponent == "com"){
			srand((unsigned) time(0));
			int temp = rand() % 5;
			p2choice = choices[temp];
		}

		p1valid = p2valid = false;

		//VS
		cout << p1choice << " vs " << p2choice << endl;
		if(p1choice == p2choice){
			cout << "its a tie!" << endl;
			tie++;
		}
		else if(p1choice == "rock"){
			if(p2choice == "scissors" || p2choice == "lizard"){
				cout << "p1 wins" << endl;
				win++;
			}
			else{
				cout << "p1 loses" << endl;
				lose++;
			}
		}
		else if(p1choice == "paper"){
			if(p2choice == "rock" || p2choice == "spock"){
				cout << "p1 wins" << endl;
				win++;
			}
			else{
				cout << "p1 loses" << endl;
				lose++;
			}
		}
		else if(p1choice == "scissors"){
			if(p2choice == "paper" || p2choice == "lizard"){
				cout << "p1 wins" << endl;
				win++;
			}
			else{
				cout << "p1 loses" << endl;
				lose++;
			}
		}
		else if(p1choice == "lizard"){
			if(p2choice == "spock" || p2choice == "paper"){
				cout << "p1 wins" << endl;
				win++;
			}
			else{
				cout << "p1 loses" << endl;
				lose++;
			}
		}
		else if(p1choice == "spock"){
			if(p2choice == "scissors" || p2choice == "rock"){
				cout << "p1 wins" << endl;
				win++;
			}
			else{
				cout << "p1 loses" << endl;
				lose++;
			}
		}

		//RESULT
		cout << "p1: " << win << " wins, " << lose << " loses, " << tie << " ties" << endl;
		if(opponent == "p2"){
			cout << "p2: " <<  rounds+1-win-tie << " wins, " << win << " loses, " << tie << " ties" << endl;
		}
		 rounds++;

	}
	return 0;
}
