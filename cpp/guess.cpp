#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

	cout << "\n==============================================" << endl;
	cout << "Try and guess a random number generated" << endl;
	cout << "by the program! For each guess, the console" << endl;
	cout << "will provide feedback on whether the guess" << endl;
	cout << "is too high or too low until the answer is" << endl;
	cout << "found." << endl;
	cout << "==============================================\n" << endl;

	int ans, guess, tries=0, maxtries, range1, range2;
	//ENTER GUESS RANGE (EG: 1-100)
	cout << "Enter guess range:" << endl;
	cout << "(eg.'1 100' would mean the answer is a no. between 1 and 100): " << endl;
	cin >> range1 >> range2;


	//ENTER NO OF TRIES
	cout << "Enter maximum number of tries: ";
	cin >> maxtries;

	//MAKING ANSWER
	srand((unsigned) time(0));

	ans = rand() % range2 + range1;
	//cout << ans << "anschecking" << endl;

	//ENTER GUESS
	while (tries < maxtries){
		cout << "Enter your guess: ";
		cin >> guess;

		//TESTING GUESS
		if (guess < ans && guess >= range1){
			cout << "Too low! ";
			guess = range2 + 1;
			tries++;
		}
		else if (guess > ans && guess <= range2){
			cout << "Too high! ";
			guess = range2 + 1;
			tries++;
		}
		else if (guess < range1 || guess > range2){
			cout << "Invalid input.";
		}
		else if (guess == ans){
			tries++;
			cout << "Congratulations! You found the number in " << tries << " tries" << endl;
			maxtries = tries;
		}

		//cout << tries << "trieschecking";
	}

	cout << "The answer was " << ans << ".";
	cout << "\n==GAME OVER==" << endl;

	return 0;
}
