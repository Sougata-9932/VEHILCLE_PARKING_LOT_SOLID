#include<iostream>

#include"Time.h"

void Time::set_time(const int& hrs, const int& mins, const int& secs)
{
	this->hrs = hrs;
	this->mins = mins;
	this->secs=secs;
}

int Time::get_hours() const
{
	return this->hrs;
}

int Time::get_mins() const
{
	return this->mins;
}
int Time::get_secs() const
{
	return this->secs;
}