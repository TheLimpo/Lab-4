#include<iostream>
#include "Point2D.h"

using namespace std;

int main()
{
	//1
	Point2D p1(1, 1);
	Point2D p2(3, 4);
	cout << p1.distanceP(p2) << endl;

	//2
	Point2D p3(p2);
	cout << p3.toString() << endl;

	cout << "p1 == p3" << ": " << (p1 == p3) << endl;
	cout << "p2 == p3" << ": " << (p2 == p3) << endl;

	//4
	Point2D p4 = p1 + p3;
	

	//5
	cout << p4.toString() << endl;
	cout << p4.distanceP(p2) << endl;
	
	//6
	cout << "p1 == p4" << ": " << (p1 == p4) << endl;
	cout << "p2 == p4" << ": " << (p2 == p4) << endl;
	cout << "p3 == p4" << ": " << (p2 == p4) << endl;


	

	cin.get();

}