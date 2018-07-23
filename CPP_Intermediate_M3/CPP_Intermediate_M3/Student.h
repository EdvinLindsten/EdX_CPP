#pragma once
#include "Person.h"

class Student : public Person
{
public:
	Student(string fname, string lname, int age, string phone);

	virtual void OutputIdentity();

	virtual void OutputAge();
};