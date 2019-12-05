#include "Point2D.h"
#include <math.h>


using namespace std;



Point2D::Point2D()
{
	x = 0;
	y = 0;
}


Point2D::~Point2D()
{
}

Point2D::Point2D(float x, float y)
{
	this->x = x;
	this->y = y;

}


Point2D::Point2D(const Point2D &o)
{
	x = o.x;
	y = o.y;

}

float Point2D::distanceP(const Point2D &o)
{
	float d = sqrt(pow(x - o.x, 2) + pow(y - o.y, 2));
	return d;
}

string Point2D::toString()
{
	string s = "(" + to_string(x) + "," + to_string(y) + ")";

	return s;
}


Point2D Point2D::operator+(const Point2D &p)
{
	Point2D point;
	point.x = x + p.x;
	point.y = y + p.y;

	return point;
}

Point2D& Point2D::operator=(const Point2D &p)
{
	x = p.x;
	y = p.y;

	return *this;
}

bool Point2D::operator== (const Point2D &p)
{
	return (x == p.x && y == p.y);
}