#include "Polyline.h"
#include <iostream>
using namespace std;


Polyline::Polyline(int sizelength)
{
	polyline = new Point2D[sizelength];
	this->sizelength = sizelength;
}


Polyline::~Polyline()
{
	delete[] polyline;
}


bool Polyline::addPoint(const Point2D &p)
{
	if (sizelength == actualsize)
	{
		cout << "Polyline is full" << endl;
		return false;
	}

	polyline[actualsize] = p;
	actualsize++;
	return true;
}

Point2D Polyline::retrieveP(const int i)
{
	if (i >= sizelength || i >= actualsize)
	{
		cout << "Index out of range" << endl;
		return Point2D(NULL, NULL);
	}
	
	return polyline[i];
}

bool Polyline::removeP()
{
	if (actualsize == 0)
	{
		cout << "No Points to remove" << endl;
		return false;
	}
	actualsize--;
	return true;
}

bool Polyline::hasPoint()
{
	if (actualsize < 1)
	{
		cout << "Polyline does not have any points" << endl;
		return false;
	}

	return true;
}

int Polyline::numberP()
{
	return actualsize;
}

float Polyline::length()
{
	float l = 0;
	for (int i = 0; i < actualsize-1; i++)
	{
		l = l + retrieveP(i).distanceP(polyline[i+1]);

	}

	return l;
}


void Polyline::coordinates()
{
	for (int i = 0; i < actualsize; i++)
	{
		cout << retrieveP(i).toString() << endl;

	}
}