#include<iostream>

#include"Time.h"
#include"Payment_Status.h"
#include"Vehicle.h"

std::string Vehicle::get_vehicle_name() const
{
	return this->v_name;
}
std::string Vehicle::get_vehicle_plateno() const
{
	return this->v_plate_number;
}
Time Vehicle::get_entry_time() const
{
	return this->entry_time;
}
Time Vehicle::get_exit_time() const
{
	return this->exit_time;
}
Payment_Status Vehicle::get_payment_status()
{
	return this->payment_status;
}
void Vehicle::set_vehicle(const Time& entry_time, const Time& exit_time, const Payment_Status& payment_status)
{
	this->entry_time = entry_time;
	this->exit_time = exit_time;
	this->payment_status = payment_status;
}
std::ostream& operator<<(std::shared_ptr<Vehicle>& vehicle, std::ostream& cout)
{
	std::cout << "VEHICLE's TYPE : " << vehicle->get_vehicle_type();
	std::cout << "VEHICLE's NAME : " << vehicle->v_name;
	std::cout << "VEHICLE's PLATE NUMBER : " << vehicle->v_plate_number;
	std::cout << "VEHICLE's PAYMENT STATUS : ";
	std::cout << vehicle->get_payment_status().get_payment_status().second << std::endl;
	return cout;
}