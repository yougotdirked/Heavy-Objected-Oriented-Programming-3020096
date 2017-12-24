#pragma once

//Dirk Koene | 3020096

class Ex0
{
public:
	Ex0(void);
	~Ex0(void);	
};

class Calendar
{
public:
	int time[4];
	//use calendar framework
	schoolClass classes[20];
};

class schoolClass
{
	ID students[50];
};

class ID
{
public:
	int number;
	char firstName[20];
	char lastname[20];
	char courseTag[5];
	enum function;
private:
	char password[15];
};

class Appointment
{
public:
	int startTime[2];
	int endTime[2];
	char description[100];

	void setTime(int start[2], int end[2]);

	void setDescription(char descr[100]);

	void removeAppointment();
};

//should be part of calendar framework
class Week
{
public:
	Day days[7];
	int count;
};

class Day
{
public:
	int hours[24];

	Appointment as[100];

private:
	bool checkAppointment;

};



