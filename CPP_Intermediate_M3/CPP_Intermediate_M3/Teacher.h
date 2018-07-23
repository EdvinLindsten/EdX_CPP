#pragma once
#include "Person.h"
#include <iostream>

class Teacher : public Person
{
public:
	Teacher(string fname, string lname, int age, string phone);

	virtual void OutputIdentity() const;

	virtual void OutputAge() const;
};
