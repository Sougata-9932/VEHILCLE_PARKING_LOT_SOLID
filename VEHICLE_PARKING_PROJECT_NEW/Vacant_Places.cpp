
#include<iostream>
#include<vector>

#include"Vacant_Places.h"
#include"Vehicle.h"

void Vacant_Places::show_vacant_places(const std::vector<std::shared_ptr<Vehicle>>& all_vehicles)
{
	for (int i = 0; i < all_vehicles.size(); i++)
	{
		if (all_vehicles[i]->get_vehicle_name() == "" || all_vehicles[i]->get_vehicle_plateno() == "")
		{
			std::cout << i << " ";
		}
	}
	std::cout << std::endl;
}