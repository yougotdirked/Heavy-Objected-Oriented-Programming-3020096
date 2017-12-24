#include "Module_.h"

Module_::Module_(Docent* t)
{
	d = t;
	reward = 10;
	i = students.begin();
}


Module_::~Module_(void)
{
}

void Module_::addStudent(Student* s)
{
	(*i) = s;
	i++;
}