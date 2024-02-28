#pragma once
#include<iostream>
#include<vector>

/// <summary>
/// "Time" CLASS WILL STORE TIME IN  HOURS , MINS ,SECS FORMAT 
/// & DO OPERATION ON THE TIME 
/// </summary>
class Time
{
	int hrs, mins, secs;
public:
	Time():hrs(0),mins(0),secs(0){}
	void set_time(const int&, const int&, const int&);
	int get_hours() const;
	int get_mins() const;
	int get_secs() const;
};