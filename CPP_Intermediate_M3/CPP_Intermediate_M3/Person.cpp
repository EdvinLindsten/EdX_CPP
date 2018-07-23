#include "stdafx.h"
#include "Person.h"
#include <iostream>

void Person::OutputIdentity() const
{
	cout << "I'm a person" << endl;
}

void Person::OutputAge() const
{
	std::cout << "I am " << age << " years old." << std::endl;
}

Person::Person(string fname, string lname, int age, string phone) :
	first_name(fname),
	last_name(lname),
	age(age),
	phone(phone)
{
}
