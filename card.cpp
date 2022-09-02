#include "card.h"

Card::Card() {

}

Card::Card(SUIT st, RANK rnk){
	this->suit = st;
	this->rank = rnk;
}

//#include <vector>
Card::~Card() {

}

Card::SUIT Card::getSuit() {
	return this->suit;
}

Card::RANK Card::getRank () {
	return this->rank;
}
