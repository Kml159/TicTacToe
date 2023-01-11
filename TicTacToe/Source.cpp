#include <iostream>
#include <cstdlib>
#include "minimax.h"

using namespace std;

int main() {

	int board[9] = { -1, -1, -1, -1, -1, -1, -1, -1, -1 };	// -1 by default
	int pos = 0;												// Position
	int player;												// Who plays first?
	bool playmode;

	srand((unsigned)time(NULL)); // imports random

	cout << "Game Positions: " << endl;
	cout << "|||||||||" << endl;
	cout << "| 1 2 3 |" << endl;
	cout << "| 4 5 6 |" << endl;
	cout << "| 7 8 9 |" << endl;
	cout << "|||||||||" << endl;

	cout << "One player: 0\nTwo Player: 1\nPlaymode: ";
	cin >> playmode;

	if (playmode == 1) {

		player = rand() % 2; // Gets random number to determine first player

		if (player == 0) {

			cout << "First move is O!" << endl;
		}
		else if (player == 1) {

			cout << "First move is X!" << endl;
		}



		while (isend(board) == 0) {

			getinput(board, pos, player);

			printboard(board);

			player++;
		}

	}
	else if (playmode == 0) {

		player = rand() % 2; // Gets random number to determine first player

		cout << endl << "First player is " << convert(player, 0) << "!" << endl;

		while (isend(board) == 0) {

			if (player % 2 == 1) { // Player X

				getinput(board, pos, player);
			}
			else if (player % 2 == 0) { // Player O ai plays

				aiplays(board, player);
			}

			printboard(board);

			player++;
		}

	}

	cout << endl << "Enter anything to end the program." << endl;

	int x;

	cin >> x;
}
