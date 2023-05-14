#include "class_Rectangle.h"

bool Rectangle::bool_check()
{
    if (Parallelogram::bool_check())
    {
        if ((angle_A == 90) && (angle_B == 90) && (angle_C == 90) && (angle_D == 90))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
Rectangle::Rectangle(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Parallelogram(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	name = "�������������";
}
