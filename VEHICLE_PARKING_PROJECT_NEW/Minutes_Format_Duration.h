#pragma once

#include<iostream>

#include"Calculate_Duration.h"
#include"Time.h"

/// <summary>
/// THIS CLASS IS DERIVED FROM "Calculate_Duration" CLASS & IT'S FOR CALCULATING THE DURATION IN MINUTES FORMAT 
/// </summary>
class Minutes_Format_Duration : public Calculate_Duration
{
public:
	std::string Calculate_Duration::get_type() const override;
	double Calculate_Duration::get_duration(const Time&, const Time&);
};