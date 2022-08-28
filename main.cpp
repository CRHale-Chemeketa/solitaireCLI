#include"game.h"
#include"card.h"
#include"deck.h"

int main(){
//	srand(time(NULL));

//	game curGame;
//		curGame.initGame();

//	while(curGame.getPlaying()) {
//		curGame.mainMenu();
//	}

Deck starter;
starter.show();
starter.shuffle();
starter.show();

	return 0;
}
