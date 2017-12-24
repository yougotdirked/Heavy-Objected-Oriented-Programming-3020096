#pragma once
#include "Module_.h"
#include <vector>
#include <string>
using namespace std;

class Student
{
public:
	Student(void);
	~Student(void);

	int ec;
	int id;

	vector<Module_> module;

	void setID(int i);
	void assignToModules(Module_* ms[]);
};

