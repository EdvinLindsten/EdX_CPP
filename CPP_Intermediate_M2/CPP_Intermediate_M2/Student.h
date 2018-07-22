#pragma once
#include <string>
using namespace std;

class Student
{
public:
	string fName{};
	string lName{};
	int age{};
	string address{};
	string city{};
	string phone{};

	Student(string fName, string lName, int age, string address, string city, string phone);

	Student();

	~Student();

	void SitInClass();



};