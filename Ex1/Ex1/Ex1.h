#pragma once
#include "Module_.h"
#include "Docent.h"
#include "Student.h"
#include <random>

int main();

class Ex1
{
public:
	Ex1(void);

	Module_* modules[3];
	Student* students[10];
	Docent* teachers[3];

	void populate();
	void removeStudent(Module_ m, Student s);

	void printEC(Student s);
	void printAll(Student s[]);

	~Ex1(void);

};

