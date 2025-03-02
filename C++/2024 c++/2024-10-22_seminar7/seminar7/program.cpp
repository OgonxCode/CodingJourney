//make a rock paper sciccors gme with a point system 

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int playerScore = 0;
	int computerScore = 0;
	string playerChoice;
	string computerChoice;
	string choices[3] = {"rock", "paper", "scissors"};
	while (playerScore < 3 && computerScore < 3) {
		cout << "Enter rock, paper, or scissors: ";
		cin >> playerChoice;
		int randomIndex = rand() % 3;
		computerChoice = choices[randomIndex];
		cout << "Computer chose " << computerChoice << endl;
		if (playerChoice == computerChoice) {
			cout << "It's a tie!" << endl;
		} else if (playerChoice == "rock") {
			if (computerChoice == "scissors") {
				cout << "You win!" << endl;
				playerScore++;
			} else {
				cout << "Computer wins!" << endl;
				computerScore++;
			}
		} else if (playerChoice == "paper") {
			if (computerChoice == "rock") {
				cout << "You win!" << endl;
				playerScore++;
			} else {
				cout << "Computer wins!" << endl;
				computerScore++;
			}
		} else if (playerChoice == "scissors") {
			if (computerChoice == "paper") {
				cout << "You win!" << endl;
				playerScore++;
			} else {
				cout << "Computer wins!" << endl;
				computerScore++;
			}
		} else {
			cout << "Invalid choice!" << endl;
		}
		cout << "Player: " << playerScore << " Computer: " << computerScore << endl;
	}
	if (playerScore > computerScore) {
		cout << "You win the game!" << endl;
	} else {
		cout << "Computer wins the game!" << endl;
	}
	return 0;
}

