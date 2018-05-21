#include "Human.h"

Human::Human(string name, string sname, int age, string address)
{
	this->name = name;
	this->sname = sname;
	this->age = age;
	this->address = address;
}

istream & operator >> (istream & is, Human & obj)
{
	string s;
	getline(is, obj.name, '/');
	getline(is, obj.sname, '/');
	is >> obj.age;
	getline(is, s, '/');
	getline(is, obj.address);
	return is;
}

ostream & operator<<(ostream & os, Human & obj)
{
	os << obj.name << " " << obj.sname << " - " << obj.age << " age. Address: " << obj.address << endl;
	return os;
}
