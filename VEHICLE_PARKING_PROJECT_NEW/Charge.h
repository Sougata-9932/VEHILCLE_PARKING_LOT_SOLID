#pragma once

#include<iostream>

/// <summary>
/// THIS CLASS WILL STORE THE CHARGES APPLIED ON THE VEHICLES PER UNIT TIME 
/// </summary>
class Charge
{
	static double charged_money_car;
	static double charged_money_bus;
	static double charged_money_bike;
public:
	static void set_charged_money(const double &,const double&,const double&);
	static double get_car_charge();
	static double get_bus_charge();
	static double get_bike_charge();
};