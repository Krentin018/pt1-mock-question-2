#pragma once
#include <iostream>
class Time
{

private:
	int hours;
	int minutes;
public:
	Time::Time(int h, int m);
	~Time();

	void Time::set(int h, int m);
	void Time::get(int &h, int &m);
};

