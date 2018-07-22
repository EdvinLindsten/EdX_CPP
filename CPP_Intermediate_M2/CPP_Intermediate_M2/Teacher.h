#pragma once
#include <string>
using namespace std;

class Teacher
{
	string fName{};
	string lName{};
	int age{};
	string address{};
	string city{};
	string phone{};

public:
	Teacher(string fName, string lName, int age, string address, string city, string phone);
	Teacher();

	void GradeStudent();
	void SitInClass();

	~Teacher();


};