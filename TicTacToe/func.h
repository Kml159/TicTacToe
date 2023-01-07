#include <iostream>
#include <cstdlib>

using namespace std;

char convert(int num, int i) {

	/*int N = i + 49; // Converting from ascii
	char c = N;*/

	switch (num) {
	case 0:
		return 'O';

	case 1:
		return 'X';

	case -1:
		return ' '; // return c for nums
	}


	return '%';
}

int prandom(int board[], int player) {

	srand((unsigned)time(NULL));

	int flag = 0;
	int random;

	cout << "\nRandom play." << endl;

	while (flag != 1) {

		random = (rand() % 9);

		if (board[random] == -1) {

			board[random] = player % 2;
			flag = 1;
		}
	}

	return random; // position that ai played is returned.
}

int aiplays(int board[], int player) {

	int flag = 0;

	cout << "\nAI plays!" << endl;

	while (flag != 1) {

		int random = (rand() % 9);

		// WINS

		// HORIZONTAL WIN // 9 POSS
		if (board[0] == player % 2 && board[1] == player % 2 && board[2] == -1) {

			board[2] = player % 2;
			flag = 1;
		}
		else if (board[1] == player % 2 && board[2] == player % 2 && board[0] == -1) {

			board[0] = player % 2;
			flag = 1;
		}
		else if (board[3] == player % 2 && board[4] == player % 2 && board[5] == -1) {

			board[5] = player % 2;
			flag = 1;
		}
		else if (board[4] == player % 2 && board[5] == player % 2 && board[3] == -1) {

			board[3] = player % 2;
			flag = 1;
		}
		else if (board[6] == player % 2 && board[7] == player % 2 && board[8] == -1) {

			board[8] = player % 2;
			flag = 1;
		}
		else if (board[7] == player % 2 && board[8] == player % 2 && board[6] == -1) {

			board[6] = player % 2;
			flag = 1;
		}
		else if (board[0] == player % 2 && board[2] == player % 2 && board[1] == -1) {

			board[1] = player % 2;
			flag = 1;
		}
		else if (board[3] == player % 2 && board[5] == player % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}
		else if (board[6] == player % 2 && board[8] == player % 2 && board[7] == -1) {

			board[7] = player % 2;
			flag = 1;
		}

		// VERTICAL WIN // 9 POSS
		else if (board[0] == player % 2 && board[3] == player % 2 && board[6] == -1) {

			board[6] = player % 2;
			flag = 1;
		}
		else if (board[1] == player % 2 && board[4] == player % 2 && board[7] == -1) {

			board[7] = player % 2;
			flag = 1;
		}
		else if (board[2] == player % 2 && board[5] == player % 2 && board[8] == -1) {

			board[8] = player % 2;
			flag = 1;
		}
		else if (board[3] == player % 2 && board[6] == player % 2 && board[0] == -1) {

			board[0] = player % 2;
			flag = 1;
		}
		else if (board[4] == player % 2 && board[7] == player % 2 && board[1] == -1) {

			board[1] = player % 2;
			flag = 1;
		}
		else if (board[5] == player % 2 && board[8] == player % 2 && board[2] == -1) {

			board[2] = player % 2;
			flag = 1;
		}
		else if (board[0] == player % 2 && board[6] == player % 2 && board[3] == -1) {

			board[3] = player % 2;
			flag = 1;
		}
		else if (board[1] == player % 2 && board[7] == player % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}
		else if (board[2] == player % 2 && board[8] == player % 2 && board[5] == -1) {

			board[5] = player % 2;
			flag = 1;
		}

		// CROSSWAY WIN // 6 POSS
		else if (board[0] == player % 2 && board[4] == player % 2 && board[8] == -1) {

			board[8] = player % 2;
			flag = 1;
		}
		else if (board[4] == player % 2 && board[8] == player % 2 && board[0] == -1) {

			board[0] = player % 2;
			flag = 1;
		}
		else if (board[0] == player % 2 && board[8] == player % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}
		else if (board[2] == player % 2 && board[4] == player % 2 && board[6] == -1) {

			board[6] = player % 2;
			flag = 1;
		}
		else if (board[4] == player % 2 && board[6] == player % 2 && board[2] == -1) {

			board[2] = player % 2;
			flag = 1;
		}
		else if (board[2] == player % 2 && board[6] == player % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}

		// BLOCKS

		// HORIZONTAL BLOCK // 9 POSS
		else if (board[0] == (player + 1) % 2 && board[1] == (player + 1) % 2 && board[2] == -1) {

			board[2] = player % 2;
			flag = 1;
		}
		else if (board[1] == (player + 1) % 2 && board[2] == (player + 1) % 2 && board[0] == -1) {

			board[0] = player % 2;
			flag = 1;
		}
		else if (board[3] == (player + 1) % 2 && board[4] == (player + 1) % 2 && board[5] == -1) {

			board[5] = player % 2;
			flag = 1;
		}
		else if (board[4] == (player + 1) % 2 && board[5] == (player + 1) % 2 && board[3] == -1) {

			board[3] = player % 2;
			flag = 1;
		}
		else if (board[6] == (player + 1) % 2 && board[7] == (player + 1) % 2 && board[8] == -1) {

			board[8] = player % 2;
			flag = 1;
		}
		else if (board[7] == (player + 1) % 2 && board[8] == (player + 1) % 2 && board[6] == -1) {

			board[6] = player % 2;
			flag = 1;
		}
		else if (board[0] == (player + 1) % 2 && board[2] == (player + 1) % 2 && board[1] == -1) {

			board[1] = player % 2;
			flag = 1;
		}
		else if (board[3] == (player + 1) % 2 && board[5] == (player + 1) % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}
		else if (board[6] == (player + 1) % 2 && board[8] == (player + 1) % 2 && board[7] == -1) {

			board[7] = player % 2;
			flag = 1;
		}

		// VERTICAL BLOCK // 9 POSS
		else if (board[0] == (player + 1) % 2 && board[3] == (player + 1) % 2 && board[6] == -1) {

			board[6] = player % 2;
			flag = 1;
		}
		else if (board[1] == (player + 1) % 2 && board[4] == (player + 1) % 2 && board[7] == -1) {

			board[7] = player % 2;
			flag = 1;
		}
		else if (board[2] == (player + 1) % 2 && board[5] == (player + 1) % 2 && board[8] == -1) {

			board[8] = player % 2;
			flag = 1;
		}
		else if (board[3] == (player + 1) % 2 && board[6] == (player + 1) % 2 && board[0] == -1) {

			board[0] = player % 2;
			flag = 1;
		}
		else if (board[4] == (player + 1) % 2 && board[7] == (player + 1) % 2 && board[1] == -1) {

			board[1] = player % 2;
			flag = 1;
		}
		else if (board[5] == (player + 1) % 2 && board[8] == (player + 1) % 2 && board[2] == -1) {

			board[2] = player % 2;
			flag = 1;
		}
		else if (board[0] == (player + 1) % 2 && board[6] == (player + 1) % 2 && board[3] == -1) {

			board[3] = player % 2;
			flag = 1;
		}
		else if (board[1] == (player + 1) % 2 && board[7] == (player + 1) % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}
		else if (board[2] == (player + 1) % 2 && board[8] == (player + 1) % 2 && board[5] == -1) {

			board[5] = player % 2;
			flag = 1;
		}

		// CROSSWAY BLOCK // 6 POSS
		else if (board[0] == (player + 1) % 2 && board[4] == (player + 1) % 2 && board[8] == -1) {

			board[8] = player % 2;
			flag = 1;
		}
		else if (board[4] == (player + 1) % 2 && board[8] == (player + 1) % 2 && board[0] == -1) {

			board[0] = player % 2;
			flag = 1;
		}
		else if (board[0] == (player + 1) % 2 && board[8] == (player + 1) % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}
		else if (board[2] == (player + 1) % 2 && board[4] == (player + 1) % 2 && board[6] == -1) {

			board[6] = player % 2;
			flag = 1;
		}
		else if (board[4] == (player + 1) % 2 && board[6] == (player + 1) % 2 && board[2] == -1) {

			board[2] = player % 2;
			flag = 1;
		}
		else if (board[2] == (player + 1) % 2 && board[6] == (player + 1) % 2 && board[4] == -1) {

			board[4] = player % 2;
			flag = 1;
		}

		// ELSE PLAY TO CENTER
		else if (board[4] == -1) { // Take the center first

			board[4] = player % 2;
			flag = 1;
		}

		// ELSE PLAY TO CORNER
		else if (board[0] == -1) {

			board[0] = player % 2;
			flag = 1;
		}
		else if (board[2] == -1) {

			board[2] = player % 2;
			flag = 1;
		}
		else if (board[6] == -1) {

			board[6] = player % 2;
			flag = 1;
		}
		else if (board[8] == -1) {

			board[8] = player % 2;
			flag = 1;
		}

		// ELSE RANDOM
		else if (board[random] == -1) {

			board[random] = player % 2;
			flag = 1;
		}
	}

	return 0;
}

void getinput(int board[], int& pos, int player) {

	do { // Getting valid input

		cout << "Enter your move (" << convert(player % 2, 0) << "): ";
		cin >> pos;

		if ((board[pos - 1] == 0) || (board[pos - 1] == 1) || pos > 9 || pos <= 0) {

			cout << "Please enter valid move." << endl;
		}

	} while (board[pos - 1] == 0 || (board[pos - 1] == 1) || pos > 9 || pos <= 0);

	board[pos - 1] = player % 2; // Writing input to board array

}

void printboard(int board[]) {

	cout << "|||||||||" << endl;
	cout << "| ";

	for (int i = 0; i < 3; i++) {

		cout << convert(board[i], i) << " ";
	}
	cout << "|" << endl;

	cout << "| ";
	for (int i = 3; i < 6; i++) {

		cout << convert(board[i], i) << " ";
	}
	cout << "|" << endl;

	cout << "| ";
	for (int i = 6; i < 9; i++) {

		cout << convert(board[i], i) << " ";
	}
	cout << "|" << endl;
	cout << "|||||||||" << endl;

}

short isend(int board[]) {

	/*
	0: continue,
	1: X wins,
	2: O wins.
	*/

	for (int i = 0; i < 3; i++) {

		if (board[i] == 1 && board[i + 3] == 1 && board[i + 6] == 1) { // Check vertical

			cout << "X player wins!" << endl;
			return 1;
		}
		else if (board[i] == 0 && board[i + 3] == 0 && board[i + 6] == 0) {

			cout << "O player wins!" << endl;
			return 2;
		}
	}

	for (int i = 0; i < 8; i = i + 3) {

		if (board[i] == 1 && board[i + 1] == 1 && board[i + 2] == 1) { // Check horizontal

			cout << "X player wins!" << endl;
			return 1;
		}
		else if (board[i] == 0 && board[i + 1] == 0 && board[i + 2] == 0) {

			cout << "O player wins!" << endl;
			return 2;
		}
	}

	if ((board[0] == 1 && board[4] == 1 && board[8] == 1) || ((board[2] == 1 && board[4] == 1 && board[6] == 1))) { // Check crossway

		cout << "X player wins!" << endl;
		cout << "----------------------------------------------------------" << endl;
		return 1;
	}
	else if ((board[0] == 0 && board[4] == 0 && board[8] == 0) || ((board[2] == 0 && board[4] == 0 && board[6] == 0))) {

		cout << "O player wins!" << endl;
		cout << "----------------------------------------------------------" << endl;
		return 2;
	}

	// Check tie
	int flag = 0;

	for (int i = 0; i < 9; i++) {

		if (board[i] == -1) {

			flag = 1;
		}
	}

	if (flag == 0) {

		cout << "Game is Tie!" << endl;
		cout << "----------------------------------------------------------" << endl;
		return -1;
	}


	return 0;
}