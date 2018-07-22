#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

Teacher::Teacher(string fName, string lName, int age, string address, string city, string phone) :
	fName(fName),
	lName(lName),
	age(age),
	address(address),
	city(city),
	phone(phone)
{

}

Teacher::Teacher()
{
}

void Teacher::GradeStudent()
{
	std::cout << "Student graded" << std::endl;
}

void Teacher::SitInClass()
{
	cout << "Sitting at front of class" << endl;
}

Teacher::~Teacher()
{
}
