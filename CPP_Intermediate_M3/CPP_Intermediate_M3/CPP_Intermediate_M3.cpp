// CPP_Intermediate_M3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
	// 7) 
	Student molly("Molly", "Humflum", 23, "073-564 58 98");
	
	// 8)
	molly.OutputIdentity();

	// 9)
	molly.OutputAge();

	// 10)
	Teacher * orkva = new Teacher("Örk", "Va", 65, "0723-45 87 98");

	// 11)
	orkva->OutputIdentity();

	// 12)
	orkva->OutputAge();

	system("pause");
    return 0;
}

//int age;
//string phone;
//string first_name;
//string last_name;
//string race;