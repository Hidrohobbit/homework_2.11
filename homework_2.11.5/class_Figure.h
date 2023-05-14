#pragma once
#include <string>
#include <iostream>
#include "import_export_.h"

class Figure
{
public:
	FIGURE_LIB_API virtual void print_info();
	FIGURE_LIB_API Figure();
protected:
	virtual bool bool_check();
	int sides_count;
	std::string name;
};