#ifndef TICTACTOEGAME_H
#define TICTACTOEGAME_H
#pragma once

#include <string>
#include <iostream>

using namespace std;

class TicTacToeGame  
{
private:
	
	char board[3][3];
	string _player1;
	string _player2;
	void initBoard();
public:
		TicTacToeGame(string player1, string player2);
		void printBoard(void);
		void setPlayer1(int x, int y);
		void setPlayer2(int x, int y);
		void checkBoard(void);

};
#endif