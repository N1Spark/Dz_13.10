#include <iostream>
#include "Header.h"
#include "Vehicle.h"

using namespace std;
using namespace Military;
using namespace Transport;

int main()
{
	Base obj(200, 10, 800, 900);
	obj.Print();

	Vehicle* obj2 = nullptr;
	obj2 = new Truck(20, 150, 80, 200);
	cout << endl;

	obj2->Print();
	obj2->leave(obj);
	cout << endl;

	obj.Print();
	cout << endl;

	obj2->Print();
	obj2->arrive(obj);
	cout << endl;

	obj.Print();
	cout << endl;

	obj2->Print();
}