// CPP_Intermediate_M2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

int main()
{
	// 1)
	Student stud1("Sprutt", "Prutt", 6, "Hullebullevägen 35", "KarlsKROANa", "0722-34 35 65");
	Student stud2("Olle", "Bolle", 6, "Skogen 45", "Stockholm", "0745-76 37 65");
	Student stud3("Edvind", "Medvind", 6, "Luftgatan 45", "Hålleboda", "0713-23 67 65");

	// 2)
	Course intermCPP("Intermediate C++");
    
	// 3)
	intermCPP.students[1] = stud1;
	intermCPP.students[2] = stud2;
	intermCPP.students[3] = stud3;

	// 4)
	Teacher teach1("Örk", "Va", 68, "Huvudleden 34", "Danderyd", "Unknown");

	// 5)
	intermCPP.courseTeacher = teach1;

	// 6a)
	cout << intermCPP.name << endl;

	// 6b)
	teach1.GradeStudent();

	system("pause");
	return 0;
}

