#include "Student.h"
#include <random>

Student::Student(void)
{
}


Student::~Student(void)
{
}


void Student::setID(int i)
{
	id = id;
}

//Assigns the student to random modules
void Student::assignToModules(Module_* ms[])
{
	for (int i = 0; i <3; i++)
	{
		int r = rand()%2;

		if (r == 1)
		{
			(*ms[i]).addStudent(this);
		}
	}
}
