#pragma once
#include "class_Parallelogram.h"

class Rectangle : public Parallelogram
{
public:
	FIGURE_LIB_API Rectangle(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D);
protected:
	bool bool_check() override;
};