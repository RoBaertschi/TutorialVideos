#include "TicTacToeGame.hpp"

int main(void)
{
    string player1;
    string player2;
    cout << "Name of Player 1: ";
    cin >> player1;
    cout << endl << "Name of Player 2: ";
    cin >> player2;
    cout << endl;

    TicTacToeGame game(player1, player2);
    while (true){
        int _x, _y;
        game.printBoard();
        cout << "Player 1: ";
        cout << "x: ";
        cin >> _x;
        cout << "\ny: ";
        cin >> _y;
        game.setPlayer1(_x, _y);
        game.checkBoard();
        game.printBoard();
        cout << "Player 2: ";
        cout << "x: ";
        cin >> _x;
        cout << "\ny: ";
        cin >> _y;
        game.setPlayer2(_x, _y);
        game.checkBoard();
    }
   
}
