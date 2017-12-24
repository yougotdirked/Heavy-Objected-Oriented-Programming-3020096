#pragma once
#include "Docent.h"
#include "Student.h"
using namespace std;

//Underscore want Module is al een bestaande class ofzo.
class Module_
{
public:
	Module_(Docent* t);
	~Module_(void);

	Docent* d;

	int reward;

	vector<Student*> students;
	vector<Student*>::iterator i;

	void addStudent(Student* s);

	void initiateModule();
};

