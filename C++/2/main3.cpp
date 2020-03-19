#include <iostream>
#include "Bike.h"
#include "Car.h"

using namespace std;

int main()
{
	Vehicle a(3, 2);
	Vehicle b(a);
	Vehicle c(6, 50);
	Car e(8);
	Car g(e);
	Car i(6);
	Bike k;
	i.drive();
	k.show();
	k.ride();
	/*delete k;
	delete j;
	delete i;
	delete h;
	delete e;
	delete d;
	delete g;
	delete f;
	delete c;
	delete a;
	delete b;*/

	return 0;
}
