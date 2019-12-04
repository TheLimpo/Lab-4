#pragma once
#include "Engine.h"
#include "Body.h"
#include "Owner.h"



class MotorVehicle
{
	Engine engine;
	Body body;
	Owner owner;
	int numberOfTires;
	float* tireDiameters;
	std::string model;

public:
	MotorVehicle(Engine engineIn, Body bodyIn, Owner ownerIn, int numberOfTiresIn, std::string modelIn);

	void print();

	virtual ~MotorVehicle();
};

