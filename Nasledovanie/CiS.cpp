#include "CiS.h"

Circle_in_Square::Circle_in_Square()
{
	x = 0;
	y = 0;
	R = 0;
	side = 0;
}

Circle_in_Square::Circle_in_Square(double x, double y, double side, double R) :Square(side), Circle(R)
{
	this->x = x;
	this->y = y;
}

istream & operator >> (istream &is, Circle_in_Square &obj)
{
	is >> obj.x >> obj.y >> obj.side >> obj.R;
	return is;
}

ostream & operator<<(ostream &os, Circle_in_Square &obj)
{
	os << obj.x << "\t" << obj.y << "\t" << obj.side << "\t" << obj.R;
	return os;
}
