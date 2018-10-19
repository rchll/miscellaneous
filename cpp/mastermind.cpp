#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>

using namespace std;

int main() {
	int x, tries, maxtries, rr, rw, lvl; //r=right w=wrong
	tries = 0;
	lvl = 0;
	bool validlvl = false;
	string peg[4];

	//ENTER NO OF TRIES
	cout << "Enter maximum number of tries: ";
	cin >> maxtries;
	if (maxtries > 100){
		cout << "Enter a smaller max no. of tries: ";
		cin >> maxtries;
	}


	//ENTER LVL
	while (validlvl == false){
		cout << "Enter level (number of colours between 4 and 6): ";
		cin >> lvl;

		if(lvl == 4){
			validlvl = true;
			cout << "You may choose from the following colours:"
				<< endl;
			cout << "'red', 'yellow', 'blue', and 'green'"
				<< endl;
		}
		else if(lvl == 5){
			validlvl = true;
			cout << "You may choose from the following colours:"
				<< endl;
			cout << "'red', 'yellow', 'blue', 'green' and 'purple'"
				<< endl;
		}
		else if(lvl == 6){
			validlvl = true;
			cout << "You may choose from the following colours:"
				<< endl;
			cout << "'red', 'orange','yellow', 'blue', 'green' and 'purple'"
				<< endl;
		}
	};

	string colours[6] = {"red","yellow","blue","green","purple","orange"};

	srand((unsigned) time(0));

	string ans[4]; //answer

	//MAKING THE ANSWER KEY
	x = rand() % lvl;
	ans[0] = colours[x];//first colour

	x = rand() % lvl;
	ans[1] = colours[x];//second colour

	x = rand() % lvl;
	ans[2] = colours[x];//third colour

	x = rand() % lvl;
	ans[3] = colours[x];//fourth colour



	while (tries < maxtries){

		//cout << "the answer is" << ans[0] << ans[1]
			//<< ans[2] << ans[3] << endl; //checking
		rr = 0; //right colour right position
		rw = 0; //right colour wrong position

		//INPUT GUESS
		cout << "Enter colour of first peg: ";
		cin >> peg[0];
		cout << "Enter colour of second peg: ";
		cin >> peg[1];
		cout << "Enter colour of third peg: ";
		cin >> peg[2];
		cout << "Enter colour of fourth peg: ";
		cin >> peg[3];

		//SPECIAL COMMANDS
		for(int for1=0; for1<4; for1++){
			if (peg[for1] == "strkyex"){
				//sudden exit
				maxtries = tries;
			}
			else if (peg[for1] == "strkyre"){
				//ignore current round of input bc typos idk
				tries--;
			}
		}
		tries++;

		//cout << "no of tries: " << tries << endl;//for testing

		//TESTING GUESS

		//for rr
		for(int for1=0; for1<lvl; for1++){
			if (ans[for1] == peg[for1]){
				rr++;
				peg[for1] = "X"; //remove peg colour
			}
		}

		//for rw
		for(int for1=0; for1<lvl; for1++){
			for(int for2=0; for2<lvl; for2++){
				if (ans[for1] == peg[for2]){
					rw++;
					peg[for2] = "X"; //remove peg colour
				}
			}
		}

	if (rr == 4){ //if all correct
		cout << "congratulations!" << endl;
		cout << "you got the answer in " << tries <<
				" tries :D" << endl;
		maxtries = tries;
	}
	else{
		cout << "you have " << rr << " right colours in the right position." << endl;
		cout << "you have " << rw << " right colours in the wrong position." << endl;

	}
	}

	cout << "the answer is " << ans[0] << "-" << ans[1] << "-"
			<< ans[2] << "-" << ans[3] << endl;
	cout << "== GAME OVER ==" << endl;

	return 0;
}
