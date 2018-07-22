//Assignment in M1_lab.txt
#include "stdafx.h"

void PassByValue(int);
void PassByRef(int*);

class Person
{
	int _age{},
		_height{},
		_weight{};
public:
	std::string _name{};
	Person(std::string name, int age, int height, int weight);
	void PrintValues();
};

Person::Person(std::string name, int age, int height, int weight) :
	_name{ name },
	_age{ age },
	_height{ height },
	_weight{weight}
{

}

void Person::PrintValues()
{
	cout << "Name: " << _name << endl;
	cout << "Age: " << _age << endl;
	cout << "Height: " << _height << endl;
	cout << "Weight: " << _weight << endl;
}

void ModifyPerson(Person *person, string new_name)
{
	person->_name = new_name;
	cout << person->_name << endl;
}

//PointersLab program
//I use this function instead of main
void PointersLab()
{

	////From question 1 to 25:
	//int num1{ 3 };
	//int* pNum = new int;
	//
	//PassByValue(num1);
	//cout << "# Main:\nnum1: " << num1 << "\n" << endl;
	//
	//PassByRef(pNum);
	//cout << "# Main:\n*pNum: " << *pNum << "\n" << endl;


	//double* pDouble = new double;
	//*pDouble = 39;

	//cout << "# Main:\n*pDouble: " << *pDouble << endl;
	//cout << "pDouble: " << pDouble << endl;

	//delete pDouble;

	//cout << "*pDouble: " << pDouble << "\n" << endl;
	//
	//delete pNum;

	////From question 26 and forward:
	Person* roffe = new Person("Roffe", 39, 181, 80);

	roffe->PrintValues();
	ModifyPerson(roffe, "Hubbe");
	roffe->PrintValues();

	delete roffe;
}
	
void PassByValue(int num)
{
	cout << "# PassByValue:" << endl;
	++num;
	cout << "num1: " << num << endl;
	cout << endl;
}

void PassByRef(int* num)
{
	cout << "# PassByRef:" << endl;
	*num = 50;
	cout << "*pNum: " << *num << endl;
	cout << endl;
}