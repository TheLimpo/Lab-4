#include<iostream>
#include "MotorVehicle.h"


using namespace std;

int main()
{
	string name, address, color, model;
	bool allowedToDrive;
	float width, height, sizeInliters;
	int numberOfCylinders, numberOfTires, cars;

	cout << "How many vehicles do you want to register?: ";
	cin >> cars;
	cout << endl;

	for (int i = 0; i < cars; i++)
	{
		cout << "Model?: ";
		cin >> model;

		cout << "Number of cylinders?: ";
		cin >> numberOfCylinders;

		cout << "Size in liters?: ";
		cin >> sizeInliters;

		cout << "Color?: ";
		cin >> color;

		cout << "Width?: ";
		cin >> width;

		cout << "Heigth?: ";
		cin >> height;

		cout << "Number of tires?: ";
		cin >> numberOfTires;

		cout << "Owner?: ";
		cin >> name;

		cout << "Address?: ";
		cin >> address;

		cout << "Allowed to drive(1/0)?: ";
		cin >> allowedToDrive;
		cout << endl;

		Engine super(numberOfCylinders, sizeInliters);
		Body car(color, width, height);
		Owner person(name, address, allowedToDrive);

		MotorVehicle Volvo(super, car, person, numberOfTires, model);
		

		Volvo.print();

		cout << endl << endl;


	}

	system("pause");
	cin.get();

}



