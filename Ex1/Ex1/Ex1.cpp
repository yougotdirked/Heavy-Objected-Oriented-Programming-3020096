#include "Ex1.h"
#include <iostream>
#include <array>

Ex1::Ex1(void)
{
	populate();
}


Ex1::~Ex1(void)
{
}


void Ex1::populate()
{
	for (int i = 0; i < 10; i++)
	{
		if (i < 3)
		{
			//fill in teachers
			teachers[i] = new Docent();

			//fill in modules
			modules[i] = new Module_(teachers[i]);
		}
		//assign students
		Ex1::students[i] = new Student();
		Ex1::students[i]->assignToModules(modules);
	}
}

void Ex1::removeStudent(Module_ m, Student s)
{

}

void Ex1::printEC(Student s)
{
	std::cout << s.ec << std::endl;
}

void Ex1::printAll(Student s[])
{
	//int length = s.size(); "syntax error: Expression must have a class type"
	int length = 10;
	for (int i = 0; i < length; i++)
	{
		printEC(s[i]);
	}
}

int main()
{
	string s;
	cout << "awaiting input";
	cin >> s;

	//how to implement commands?
}
