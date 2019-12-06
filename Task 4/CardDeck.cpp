#include "CardDeck.h"
#include <iostream>

using namespace std;


CardDeck::CardDeck()
{
	for (int i = 1; i < 56; i++)
	{
		arr[i - 1] = Card(i);
		

	}
}

void CardDeck::print()
{

	for (int i = 0; i < 55; i++)
	{
		arr[i].print();
		
	}
	
}

CardDeck::~CardDeck()
{
}
