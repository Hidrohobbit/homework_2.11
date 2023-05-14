#include "Greeter.h"

std::string Greeter::greet(std::string str_name)
{
	return greetings + str_name + "!\n";
}

Greeter::Greeter()
{
	greetings = "I greet you ";
}
