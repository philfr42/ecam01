#include <stdlib.h>
#include "shuffle.h"

DECK *shuffle(DECK *deck)
{
	int ncards = deck->capacity;

	for(int i=0; i<50; i++)
	{
		int card1 = random() % ncards;
		int card2 = random() % ncards;
		CARD *cardtemp = deck->cards[card1];
		deck->cards[card1] = deck->cards[card2];
		deck->cards[card2] = cardtemp;
	}
}
