#pragma once
#include<string>


class Owner
{
	std::string name, address;
	bool allowedToDrive;

public:
	Owner();

	void print();

	~Owner();
};

