#pragma once
#include "class_Figure.h"



class Triangle : public Figure
{
public:
	FIGURE_LIB_API void print_info() override;
	FIGURE_LIB_API Triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C);
protected:
	std::string figure_info();
	bool bool_check() override;

	int sides_A;
	int sides_B;
	int sides_C;

	int angle_A;
	int angle_B;
	int angle_C;
};