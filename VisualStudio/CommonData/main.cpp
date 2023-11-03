#include <iostream>
#include <string>
#include "Interface.h"

using namespace std;

int main()
{
	cout << "Program start\n\n";

	//Setting data
	a.Set(2);
	b.Set(1.234f);
	c.Set("new string");

	//Getting data
	cout << "Get value\n";
	cout << "a = " << a.GetValue() << "\n";
	cout << "b = " << b.GetValue() << "\n";
	cout << "c = " << c.GetValue() << "\n\n";

	//Print all data
	a.Print("a");
	b.Print("b");
	c.Print("c");

	//Leave it at the end of the loop, after setting the data for all variables
	UpdateAll();

	cout << "After update all state\n\n";

	//Print all data
	a.Print("a");
	b.Print("b");
	c.Print("c");

	cout << "Program end";

	return 0;
}
