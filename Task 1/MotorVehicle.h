#pragma once
#include "Engine.h"
#include "body.h"
#include "Owner.h"



class MotorVehicle
{
	Engine engine;
	Body body;
	Owner owner;
	int numberOfTires;
	float* tireDiameters = new float[numberOfTires];
	std::string model;
public:
	MotorVehicle();

	void print();

	virtual ~MotorVehicle();
};

