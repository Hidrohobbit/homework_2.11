#pragma once
#include "class_Quadrangle.h"

class Parallelogram : public Quadrangle
{
public:
	FIGURE_LIB_API Parallelogram(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D);
protected:
	bool bool_check() override;
};