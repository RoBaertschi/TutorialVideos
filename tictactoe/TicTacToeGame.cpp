#include "TicTacToeGame.hpp"  
	
TicTacToeGame::TicTacToeGame(string player1, string player2)
{
    _player1 = player1;
    _player2 = player2;
    initBoard();
}

void TicTacToeGame::printBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j];
        }
        cout << endl;
    }
}

void TicTacToeGame::initBoard(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '.';
        }
    }
}

void TicTacToeGame::setPlayer1(int x, int y) 
{
    if (board[x][y] == '.') {
        board[x][y] = 'X';
    }else {
        int _x, _y;
        cout << "Pleas try Again: \n";
        cout << "x: ";
        cin >> _x;
        cout << "\ny: ";
        cin >> _y;
        setPlayer1(_x, _y);
    }
}

void TicTacToeGame::setPlayer2(int x, int y)
{
    if (board[x][y] == '.') {
        board[x][y] = 'O';
    }else {
        int _x, _y;
        cout << "Pleas try Again: \n";
        cout << "x: ";
        cin >> _x;
        cout << "\ny: ";
        cin >> _y;
        setPlayer2(_x, _y);
    }
}

void TicTacToeGame::checkBoard(void)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == 'X' and board[i][1] == 'X' and board[i][2] == 'X') {
            cout << "Player 1 won!\n";
            exit(EXIT_SUCCESS);
        }
        if (board[i][0] == 'O' and board[i][1] == 'O' and board[i][2] == 'O') {
            cout << "Player 2 won!\n";
            exit(EXIT_SUCCESS);
        }
    }
    if (board[0][1] == 'X' and board[1][1] == 'X' and board[2][1] == 'X') {
            cout << "Player 1 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][1] == 'X' and board[1][1] == 'X' and board[2][1] == 'X') {
            cout << "Player 1 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][2] == 'X' and board[1][2] == 'X' and board[2][2] == 'X') {
            cout << "Player 1 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][1] == '=' and board[1][1] == 'O' and board[2][1] == 'O') {
            cout << "Player 2 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][1] == 'O' and board[1][1] == 'O' and board[2][1] == 'O') {
            cout << "Player 2 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][2] == 'O' and board[1][2] == 'O' and board[2][2] == 'O') {
            cout << "Player 2 won!\n";
            exit(EXIT_SUCCESS);
    }

    if (board[0][0] == 'O' and board[1][1] == 'O' and board[2][2] == 'O') {
            cout << "Player 2 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][2] == 'O' and board[1][1] == 'O' and board[2][0] == 'O') {
            cout << "Player 2 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][0] == 'X' and board[1][1] == 'X' and board[2][2] == 'X') {
            cout << "Player 1 won!\n";
            exit(EXIT_SUCCESS);
    }
    if (board[0][2] == 'X' and board[1][1] == 'X' and board[2][0] == 'X') {
            cout << "Player 1 won!\n";
            exit(EXIT_SUCCESS);
    }

}