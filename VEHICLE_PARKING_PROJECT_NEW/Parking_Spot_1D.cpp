
#include<iostream>
#include<vector>

#include"Parking_Spot.h"
#include"Vehicle.h"
#include"Parking_Spot_1D.h"
#include"Car.h"
#include"Bus.h"
#include"Bike.h"
#include"Hours_Format_Duration.h"
#include"Charge.h"
#include"Payment_Processor.h"

std::string Parking_Spot_1D::get_spot_type() const
{
	return "Parking_Spot_1D";
}

std::vector<std::shared_ptr<Vehicle>> Parking_Spot_1D::get_slots() const
{
	return this->slots_1d;
}

int Parking_Spot_1D::get_capacity() const
{
	return this->capacity;
}
void Parking_Spot_1D::place_vehicle(const int& index, const std::shared_ptr<Vehicle>& vehicle)
{
	if (index > (this->capacity - 1) || index<0 )
	{
		std::cout << "INDEX OUT OF RANGE......\n\n";
		return;
	}
	this->slots_1d[index] = vehicle;
	std::cout << "VEHICLE PLACED AT POSITION [" << index << "] SUCESSFULY.....\n\n";
}
std::shared_ptr<Vehicle> Parking_Spot_1D::unplace_vehicle(const int &index,const double &received_money)
{
	if (index > (this->capacity - 1) || index < 0)
	{
		std::cout << "INDEX OUT OF RANGE......\n\n";
		return nullptr;
	}
	std::shared_ptr<Vehicle> vehicle = this->slots_1d[index];
	Hours_Format_Duration hours_duration;
	double duration = hours_duration.get_duration(vehicle->get_entry_time(), vehicle->get_exit_time());
	std::string vehicle_type = vehicle->get_vehicle_type();
	double charged_money;
	Charge charge;
	if (vehicle_type == "Car")
	{
		charged_money = charge.get_car_charge();
	}
	else if (vehicle_type == "Bus")
	{
		charged_money = charge.get_bus_charge();
	}
	else
	{
		charged_money = charge.get_bike_charge();
	}
	Payment_Processor payment_processor;
	double due = payment_processor.process_payment(charged_money, received_money);
	if (due!=0)
	{
		std::cout << "PAYMENT NOT DONE YET || DUE : " << due << std::endl;
		return nullptr;
	}
		std::cout << "PAYMENT SUCESSFUL.....\n\n";
	this->slots_1d[index] = nullptr;
	return vehicle;
	std::cout << "VEHICLE TAKEN OUT FROM POSITION [" << index << "] SUCESSFULY.....\n\n";
}


