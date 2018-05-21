#include "Students.h"

istream & operator >> (istream & is, Student & obj)
{
	string s;
	getline(is, obj.name, '/');
	getline(is, obj.sname, '/');
	is >> obj.age;
	getline(is, s, '/');
	getline(is, obj.address,'/');
	getline(is, obj.group, '/');
	getline(is, obj.subjects);
	return is;
}

ostream & operator << (ostream & os, Student & obj)
{
	os << obj.name << " " << obj.sname << ". Age - " << obj.age << ". Address: " << obj.address << ". Group - " << obj.group << ". Subject:" << obj.subjects << endl;
	return os;
}
