#include <iostream>
using namespace std;

const int SIZE = 3;
char board[SIZE][SIZE];
char player = 'X';

void displayBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
void updateBoard(int row, int col) {
    if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == '-') {
        board[row][col] = player;
    }
}
bool checkWin() {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}
bool checkDraw() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == '-') {
                return false;
            }
        }
    }
    return true;
}

void playGame() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '-';
        }
    }

    while (true) {
        displayBoard();
        int row, col;
        cout << "Player " << player << ", enter row and column: ";
        cin >> row >> col;
        updateBoard(row - 1, col - 1);

        if (checkWin()) {
            displayBoard();
            cout << "Player " << player << " wins!" << endl;
            break;
        } else if (checkDraw()) {
            displayBoard();
            cout << "It's a draw!" << endl;
            break;
        }

        player = (player == 'X') ? 'O' : 'X';
    }
}

int main() {
    char playAgain;
    do {
        playGame();
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y');

    return 0;
}
