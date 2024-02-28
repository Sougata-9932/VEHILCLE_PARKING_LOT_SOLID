#pragma once

#include<iostream>

#include"Vehicle.h"
#include"Time.h"
#include"Payment_Status.h"

class Car : public Vehicle
{
public:
	Car():Vehicle(){}
	Car(const std::string& name, const std::string& plate_number) :Vehicle(name,plate_number){}
	std::string get_vehicle_type() const override;
};