#include "class_Rhomb.h"

bool Rhomb::bool_check()
{
    if (Parallelogram::bool_check())
    {
        if (sides_A == sides_B) //�������� ��������� ��� ����� AC && BD ������������ � "class Parallelogram : public Quadrangle --> bool_check" ��� �� ����������� ��������� (A && C) && (B && D) ������� ��������� ��������� ��� (AC) && (BD).
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
Rhomb::Rhomb(int sides_A, int sides_B, int sides_C, int sides_D, int angle_A, int angle_B, int angle_C, int angle_D) : Parallelogram(sides_A, sides_B, sides_C, sides_D, angle_A, angle_B, angle_C, angle_D)
{
	name = "����";
}
