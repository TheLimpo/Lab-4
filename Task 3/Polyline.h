#pragma once
#include "Point2D.h"

class Polyline
{
	int sizelength;
	int actualsize = 0;
	Point2D *polyline;

public:

	Polyline(int sizelength);
	virtual ~Polyline();

	bool addPoint(const Point2D &p);

	Point2D retrieveP(const int i);

	bool removeP();

	bool hasPoint();

	int numberP();

	float length();

	void coordinates();

};

