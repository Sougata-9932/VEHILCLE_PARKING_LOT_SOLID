#pragma once

#include<iostream>
#include<vector>

#include"Parking_Spot.h"
#include"Vehicle.h"

/// <summary>
/// THIS CLASS IS A 1D VARIANT OF PARKING SPOT
/// </summary>
class Parking_Spot_1D : public Parking_Spot
{
	std::vector<std::shared_ptr<Vehicle>> slots_1d;
	int capacity;
public:
	Parking_Spot_1D():capacity(0){}
	Parking_Spot_1D(const int &cap):capacity(cap),slots_1d(cap){}
	void place_vehicle(const int&, const std::shared_ptr<Vehicle>&);
	std::shared_ptr<Vehicle> unplace_vehicle(const int&,const double&);
	std::vector<std::shared_ptr<Vehicle>> get_slots() const;
	int get_capacity() const;
	std::string Parking_Spot::get_spot_type() const override;
};