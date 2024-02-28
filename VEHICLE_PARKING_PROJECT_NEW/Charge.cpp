#include<iostream>

#include"Charge.h"

/// DEFINTION OF STATIC MEMBER VARIABLES 
double Charge::charged_money_bike = 0;
double Charge::charged_money_bus = 0;
double Charge::charged_money_car = 0;


void Charge::set_charged_money(const double& amount_car, const double& amount_bus, const double& amount_bike)
{
	Charge::charged_money_car = amount_car;
	Charge::charged_money_bus = amount_bus;
	Charge::charged_money_bike = amount_bike;
}
double Charge::get_bike_charge()
{
	return Charge::charged_money_bike;
}
double Charge::get_bus_charge()
{
	return Charge::charged_money_bus;
}
double Charge::get_car_charge()
{
	return Charge::charged_money_car;
}