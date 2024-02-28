#include<iostream>
#include<vector>

#include"Show_All_Vehicles.h"
#include"Vehicle.h"

void Show_All_Vehicles::show_all_vehicles(const std::vector<std::shared_ptr<Vehicle>>& all_vehicles)
{
	if (all_vehicles.size() == 0)
	{
		std::cout << "NO VEHICLES IN THE SPOT TO SHOW.......\n\n";
		return;
	}
	for (auto& vehicle : all_vehicles)
	{
		std::cout << vehicle << std::endl;
	}
}