#pragma once
#include <string>
class Card
{
	int cards;
	std::string suit;
	std::string rank;

public:
	Card();
	Card(int cards);
	~Card();

	void print();
};

