#include "Owner.h"
#include <iostream>

using namespace std;



Owner::Owner(string NameIn, string addressIn, bool allowedToDriveIn)
{
	name = NameIn;
	address = addressIn;
	allowedToDrive = allowedToDriveIn;
}


Owner::~Owner()
{
}

void Owner::print()
{
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Allowed to drive (1/0 = yes/no): " << allowedToDrive << endl;
}

