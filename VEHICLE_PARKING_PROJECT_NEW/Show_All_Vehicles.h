#pragma once

#include<iostream>
#include<vector>

#include"Vehicle.h"

/// <summary>
/// THIS CLASS IS FOR SHOWING ALL THE VEHICLES 
/// </summary>
/// 
class Show_All_Vehicles
{
public:
	void show_all_vehicles(const std::vector<std::shared_ptr<Vehicle>>&);
};