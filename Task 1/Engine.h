#pragma once
class Engine
{
	int numberOfCylinders;
	float sizeInliters;
public:
	Engine(int numberOfCylindersIn, float sizeInlitersIn);

	void print();

	~Engine();
};

