#include <bits/stdc++.h>
using namespace std;

int main() {
	srand(time(0));
	cout << "hello\n";
	int n;
	cout << "how many times you want to play \n";
	cin >> n;
	cout << "press 1 for stone\n2 for paper\n3 for scissor\n\n";
	int playerPoint = 0, compPoint = 0;
	while (n--) {
		int compChoice = (rand() % 3) + 1;
		int playerChoice;
		cin >> playerChoice;
		if (playerChoice > 3 || playerChoice < 0) {
			cout << "you entered wrong input";
			n++;
			continue;
		}
		if (playerChoice == compChoice) {
			cout << "draw\n";
			continue;
		}
		switch (playerChoice) {
		case 1:
			if (compChoice == 2) {cout << "loss\n"; compPoint++;}
			else {cout << "win\n"; playerPoint++;}
			break;
		case 2:
			if (compChoice == 3) {cout << "loss\n"; compPoint++;}
			else {cout << "win\n"; playerPoint++;}
			break;
		case 3:
			if (compChoice == 1) {cout << "loss\n"; compPoint++;}
			else {cout << "win\n"; playerPoint++;}
		}
	}
	cout << "\nyour point🫵  :  computer point💻\n" << playerPoint << "  :  " << compPoint << endl;
	if (playerPoint == compPoint) {
		cout << "draw⚔️";
	} else if (playerPoint > compPoint) {
		cout << "you win the series🏆";
	} else {
		cout << "you loss against computer❌";
	}
	return 0;
}