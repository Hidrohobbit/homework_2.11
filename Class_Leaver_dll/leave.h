#pragma once
#include <string>

#ifdef LEAVELIB_EXPORTS
	#define LEAVE_LIB_API __declspec(dllexport)
#else
	#define LEAVE_LIB_API __declspec(dllimport)
#endif // !LEAVELIB_EXPORTS


class Leaver
{
public:
	LEAVE_LIB_API std::string leave(std::string str_name);
	LEAVE_LIB_API Leaver();
private:
	std::string pre_farewell;
	std::string post_farewell;
};
