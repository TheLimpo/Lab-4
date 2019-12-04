#include "MotorVehicle.h"
#include <iostream>
#include "time.h"

using namespace std;



MotorVehicle::MotorVehicle(Engine engineIn, Body bodyIn, Owner ownerIn, int numberOfTiresIn, string modelIn) : engine(engineIn), body(bodyIn), owner(ownerIn)
{
	numberOfTires = numberOfTiresIn;
	model = modelIn;
	tireDiameters = new float[numberOfTires];

	srand((unsigned int)time(NULL));

	for (int i = 0; i < numberOfTires; i++)
	{
		tireDiameters[i] = rand() % 101 + 600;

	}


	
}


MotorVehicle::~MotorVehicle()
{
	delete[]tireDiameters;
}

void MotorVehicle::print()
{
	cout << "Model: " << model << endl;
	engine.print();
	body.print();
	
	cout << "Number of tires: " << numberOfTires << endl;
	cout << "Tire diameters: ";
	for (int i = 0; i < numberOfTires; i++)
	{
		cout << tireDiameters[i] << ", ";

	}
	cout << endl;


	owner.print();
	

}
