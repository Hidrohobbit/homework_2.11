#include <iostream>
#include "Greeter.h"
#include "leave.h"

int main()
{
	Greeter welcome;
	Leaver goodbye;
	std::string name;
	std::cout << "Enter a name: ";
	std::cin >> name;
	std::cout << welcome.greet(name);
	std::cout << goodbye.leave(name);
	system("pause");
	return 0;
}