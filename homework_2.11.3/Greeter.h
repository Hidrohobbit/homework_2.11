#pragma once
#include <string>

class Greeter
{
public:
	std::string greet(std::string str_name);
	Greeter();
private:
	std::string greetings;
};