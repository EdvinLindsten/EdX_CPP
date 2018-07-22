#include "stdafx.h"
#include "Student.h"
#include <iostream>

Student::Student(string fName, string lName, int age, string address, string city, string phone) :
	fName(fName),
	lName(lName),
	age(age),
	address(address),
	city(city),
	phone(phone)
{

}

Student::Student() :
	fName("Unknown"),
	lName("Unknown"),
	age(0),
	address("Unknown"),
	city("Unknown"),
	phone("Unknown")
{

}

Student::~Student()
{
}

void Student::SitInClass()
{
	cout << "Sitting in main theater" << endl;
}
