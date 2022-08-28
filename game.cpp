
#include<cmath>
#include<iostream>
#include<iomanip>
#include<string>

#include"game.h"
//using namespace std;
game::game() {
	choice = 0;
	playing = true;
}

game::~game() {

}

// functions
void game::initGame() {

}

void game::mainMenu() {
	std::cout << "|-=-=-= MAIN MENU =-=-=-|" << std::endl << std::endl;
	std::cout << "|- 0: Quit             -|" << std::endl;
	std::cout << "|- 1: New Deal         -|" << std::endl;
	std::cout << "|- 2: Contnue          -|" << std::endl;
	std::cout << "|- 3: Options         -|" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;
	std::cout << std::endl;

	switch (choice) {
		case 0 :
			// Quit
			playing = false;
			break;
		case 1 :
			// New Deal
			break;
			case 2 :
				// Contnue
			break;
		case 3 :
			// Options
			break;
		default:
			break;
	}
}
