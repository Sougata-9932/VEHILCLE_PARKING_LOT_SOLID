#pragma once

#include<iostream>
#include<vector>

#include"Vehicle.h"

/// <summary>
/// THIS CLASS WILL SHOW ALL THE VACANT PLACES PRESENT IN THE SLOTS
/// </summary>
/// 
class Vacant_Places
{
public:
	void show_vacant_places(const std::vector<std::shared_ptr<Vehicle>>&);
};