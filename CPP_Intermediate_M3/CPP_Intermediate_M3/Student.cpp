#include "stdafx.h"
#include "Student.h"
#include <iostream>


Student::Student(string fname, string lname, int age, string phone) : 
	Person(fname, lname, age, phone)
{
}

void Student::OutputIdentity()
{
	cout << "I'm a student!" << endl;
}

void Student::OutputAge()
{
	Person::OutputAge();
}