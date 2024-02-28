#pragma once

#include<iostream>

#include"Vehicle.h"

class Bike : public Vehicle
{
public:
	Bike() :Vehicle() {}
	Bike(const std::string& name, const std::string& plate_number) :Vehicle(name, plate_number) {}
	std::string get_vehicle_type() const override;
};