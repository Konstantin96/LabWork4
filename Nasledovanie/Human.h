#ifndef  _HUMAN_H_
#define _HUMAN_H_
#include "Librery.h"

class Human
{
protected:
	string name;
	string sname;
	int age;
	string address;
public:
	Human() = default;
	Human(string, string, int, string);
	friend istream& operator >> (istream&is, Human&obj);
	friend ostream& operator << (ostream&os, Human&obj);
};

#endif // ! _HUMAN_H_
