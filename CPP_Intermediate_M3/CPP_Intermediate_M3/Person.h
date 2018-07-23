#pragma once
#include <string>
using namespace std;

class Person
{
private:
	int age;

protected:
	string phone;

public:
	string first_name;
	string last_name;
	string race;

	virtual void OutputIdentity() const;
	
	virtual void OutputAge() const;

	Person(string fname, string lname, int age, string phone);
};