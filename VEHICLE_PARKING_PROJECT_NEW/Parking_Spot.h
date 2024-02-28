#pragma once

#include<iostream>

/// <summary>
/// THIS IS A BASE ABSTRACT CLASS WHOSE CHILD CLASSES WILL STORE ALL THE VEHICLES IN THE PARKING SPOT 
/// </summary>
class Parking_Spot
{
public:
	virtual std::string get_spot_type() const = 0;
};