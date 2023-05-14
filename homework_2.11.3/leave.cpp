#include "leave.h"

std::string Leaver::leave(std::string str_name)
{
	return pre_farewell + str_name + "!\n" + post_farewell;
}

Leaver::Leaver()
{
	pre_farewell = "Goodbye ";
	post_farewell = "I will miss you!";
}
