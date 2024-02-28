#pragma once

#include<iostream>

#include"Vehicle.h"

class Bus : public Vehicle
{
public:
	Bus() :Vehicle() {}
	Bus(const std::string& name, const std::string& plate_number) :Vehicle(name, plate_number) {}
	std::string get_vehicle_type() const override;
};