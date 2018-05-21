#pragma once
#include "Circle.h"
#include "Square.h"
#include "Librery.h"

class Circle_in_Square :public Circle, public Square {
private:
	double x, y;
public:
	Circle_in_Square();
	Circle_in_Square(double, double, double, double);
	friend istream& operator >> (istream&is, Circle_in_Square&obj);
	friend ostream& operator << (ostream&os, Circle_in_Square&obj);

};