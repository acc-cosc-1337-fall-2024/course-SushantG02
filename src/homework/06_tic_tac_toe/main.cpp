#include"tic_tac_toe.h"
#include <iostream>

using std:: cout; using std:: cin; using std:: string;


int main() 
{
	TicTacToe game;
	string first_player;
	char option;

	do 
	{
		cout<< "Choose first player (X or O): ";
		cin>> first_player;
		game.start_game(first_player);

		int position;

		while (!game.game_over())
		{
			
			cout<< "Enter positon to mark (1 to 9): ";
			cin>> position;
			game.mark_board(position);
			game.display_board();

		}

		cout<< "Game over board is full."<< " \n";
		game.display_board();
		cout<< "Do you want to play again? (y/n): ";
		cin>> option;
	} while (option == 'y' || option == 'Y');
	
	cout<< "Thank you for playing TicTacToe."<< " \n";
	

	return 0;
}