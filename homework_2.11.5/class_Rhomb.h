#pragma once
#include "class_Parallelogram.h"

class Rhomb : public Parallelogram
{
public:
	FIGURE_LIB_API Rhomb(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D);
protected:
	bool bool_check() override;
};
