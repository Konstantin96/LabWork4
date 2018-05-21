#ifndef  _STUDENT_H_
#define _STUDENT_H_
#include "Human.h"

class Student:public Human {
private:
	string subjects;
	string group;
	int course;
public:
	Student() = default;
	Student(string name, string sname, int age, string address, string group, string subjects) :Human(name, sname, age, address) {
		this->group = group;
		this->subjects = subjects;
	}
	friend istream &operator >> (istream &is, Student &obj);
	friend ostream &operator << (ostream &os, Student &obj);
};
#endif