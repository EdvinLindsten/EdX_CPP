#include "stdafx.h"
#include "Teacher.h"

Teacher::Teacher(string fname, string lname, int age, string phone) :
	Person(fname, lname, age, phone)
{
}

void Teacher::OutputIdentity() const
{
	cout << "I'm a teacher!" << endl;
}

void Teacher::OutputAge() const
{
	Person::OutputAge();
}
