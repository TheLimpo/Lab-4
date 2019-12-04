#pragma once
#include<string>


class Body
{
	std::string color;
	float width, height;

public:
	Body();

	void print();
	~Body();
};

