#include "Card.h"
#include <iostream>


using namespace std;



Card::Card(int cards)
{
	if (0 < cards && cards < 14)
	{
		suit = "Hearts";
		if (cards > 9)
		{
			if (cards == 10)
			{
				rank = "Jack";
			}

			else if (cards == 11)
			{
				rank = "Queen";

			}

			else if (cards == 12)
			{
				rank = "King";
			}

			else if (cards == 13)
			{
				rank = "Ace";
			}

			return;
		}

		rank = to_string(cards + 1);

	}

	if (13 < cards && cards < 27)
	{
		suit = "Spades";
		if (cards > 22)
		{
			if (cards == 23)
			{
				rank = "Jack";
			}

			else if (cards == 24)
			{
				rank = "Queen";

			}

			else if (cards == 25)
			{
				rank = "King";
			}

			else if (cards == 26)
			{
				rank = "Ace";
			}

			return;
		}
		rank = to_string((cards + 1)-13);
	}

	if (26 < cards && cards < 40)
	{
		suit = "Diamonds";
		if (cards > 35)
		{
			if (cards == 36)
			{
				rank = "Jack";
			}

			else if (cards == 37)
			{
				rank = "Queen";

			}

			else if (cards == 38)
			{
				rank = "King";
			}

			else if (cards == 39)
			{
				rank = "Ace";
			}

			return;
		}
		rank = to_string((cards + 1)-26);
	}

	if (39 < cards && cards < 53)
	{
		suit = "Clubs";
		if (cards > 48)
		{
			if (cards == 49)
			{
				rank = "Jack";
			}

			else if (cards == 50)
			{
				rank = "Queen";

			}

			else if (cards == 51)
			{
				rank = "King";
			}

			else if (cards == 52)
			{
				rank = "Ace";
			}

			return;
		}
		rank = to_string((cards + 1)- 39);
	}

	if (52 < cards && cards < 56)
	{
		suit = "all";
		rank = "Joker";
	}

}

Card::Card()
{

}

Card::~Card()
{
}

void Card::print()
{
	cout << rank << " of " << suit << endl;

}
