#include "Engine.h"
#include<iostream>

using namespace std;



Engine::Engine(int numberOfCylindersIn, float sizeInlitersIn)
{
	numberOfCylinders = numberOfCylindersIn;
	sizeInliters = sizeInlitersIn;
}


Engine::~Engine()
{
}

void Engine::print()
{
	cout << "Number of cylinders: " << numberOfCylinders << endl;
	cout << "Size in liters: " << sizeInliters << endl;

}
