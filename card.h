#include <iostream>
//#include <vector>
#include <algorithm>

//A card consists of an a number and a suit
class Card {
	public :
		enum SUIT {CLUBS, DIMONDS, HEARTS, SPADES};
		enum RANK {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
		Card();
	Card(SUIT(st), RANK(rnk));
~Card();

	private :
		SUIT suit;
		RANK rank;

};

