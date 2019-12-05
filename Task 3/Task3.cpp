#include <iostream>
#include "Polyline.h"

using namespace std;


int main()
{
	Polyline pl(5);

	pl.addPoint(Point2D(1, 2));
	pl.addPoint(Point2D(3, 4));
	pl.addPoint(Point2D(5, 6));
	pl.addPoint(Point2D(7, 8));
	//pl.addPoint(Point2D(9, 10));
	//pl.addPoint(Point2D(11, 12));

	cout << pl.retrieveP(3).toString() << endl;

	//pl.removeP();

	//pl.hasPoint();

	//cout << pl.numberP() << endl;

	//cout << pl.length() << endl;

	pl.coordinates();
	cout << pl.hasPoint() << endl;
	cout << pl.length() << endl;
	cout << pl.numberP() << endl;
	pl.removeP();
	cout << pl.length() << endl;
	cout << pl.numberP() << endl;
	pl.removeP();
	cout << pl.length() << endl;
	cout << pl.numberP() << endl;
	pl.removeP();
	cout << pl.length() << endl;
	cout << pl.numberP() << endl;
	pl.removeP();
	cout << pl.length() << endl;
	cout << pl.numberP() << endl;
	cout << pl.hasPoint() << endl;
	pl.removeP();
	cout << pl.numberP() << endl;
	cout << pl.hasPoint() << endl;

	
	

	cin.get();
}