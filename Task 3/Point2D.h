#pragma once
#include<iostream>
#include <string>


class Point2D
{
	float x, y;

public:
	Point2D();
	~Point2D();

	Point2D(float x, float y);
	
	Point2D(const Point2D &o);

	float distanceP(const Point2D &o);
	
	std::string toString();

	Point2D operator+(const Point2D &p);

	Point2D& operator=(const Point2D &p);

	bool operator== (const Point2D &p);

};
