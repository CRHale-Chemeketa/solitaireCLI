#include "card.h"

Card::Card() {

}

Card::Card(SUIT(st), RANK(rnk)){
	this->SUIT = st;
	this->RANK = rnk;
}
