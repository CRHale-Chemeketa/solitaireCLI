#include<string>
#include "card.h"
#include<vector>

//This class will hold all 52 card
class Deck {
	public:
	std::vector<Card> deckOfCards;
	std::string cardBack;
	Deck();
	void show();
	void shuffle();
	~Deck();
};

