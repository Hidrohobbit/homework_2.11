#pragma once
#include "class_Triangle.h"

class Equilateral_triangle : public Triangle
{
public:
	FIGURE_LIB_API Equilateral_triangle(int sides_A, int sides_B, int sides_C, int angle_A, int angle_B, int angle_C);
protected:
	bool bool_check() override;
};