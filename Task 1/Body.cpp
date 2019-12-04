#include "Body.h"
#include <iostream>

using namespace std;



Body::Body(string colorIn, float widthIn, float heightIn)
{
	color = colorIn;
	width = widthIn;
	height = heightIn;
}


Body::~Body()
{
}

void Body::print()
{
	cout << "Color: " << color << endl;
	cout << "Width: " << width << endl;
	cout << "Heigth: " << height << endl;
}