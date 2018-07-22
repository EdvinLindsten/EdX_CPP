#pragma once
#include <iostream>
#include "Student.h"
#include "Teacher.h"

class Course
{
public:
	string name;
	Student students[3];
	Teacher courseTeacher;

	Course(string name);

	~Course();
};