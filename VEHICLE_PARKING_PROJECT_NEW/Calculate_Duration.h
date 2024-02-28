#pragma once

#include<iostream>

#include"Time.h"

/// <summary>
/// THIS IS A ABSTARCT BASE CLASS TO CALCULATE THE DURATION OF A VEHICLE 
/// </summary>
class Calculate_Duration
{
public:
	virtual std::string get_type() const = 0;
	virtual double get_duration(const Time&,const Time&) = 0;
};