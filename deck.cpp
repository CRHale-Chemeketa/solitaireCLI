#include "deck.h"
#include<stdio.h>
#include<string>
#include<algorithm>
#include<vector>
//Constructor will produce a new deck of cards and arrange them in sequence
Deck::Deck() {
	deckOfCards std::vector<Card>();
	deckOfCards.reserve(52);
	for(int i = 0 ; i < 4 ; ++i)
		for(int j = 0 ; j < 13 ; ++j)
			deckOfCards.emplace_back(Card(i,j));
}

void Deck::show() {
	std::string showCard("");
	auto it = deckOfCards.begin();
	while (it != deckOfCards.end()) {
		showCard.append((it.rank));
		showCard.append(" of ");
		showCard.append((it.RANK));
		showCard.append("\n");
		it = std::next(it);
	}
	std::cout << showCard <<std::endl;

}

//This member function will shuffle the cards
void Deck::shuffle() {
	srand(time(NULL));
std::random_shuffle(deckOfCards.begin(),deckOfCards.end());
}

//Destructor
Deck::~Deck() {
	//delete deckOfCards;
}
