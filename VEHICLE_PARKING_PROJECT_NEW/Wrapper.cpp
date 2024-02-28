#include<iostream>
#include<vector>
#include<string>

#include"Wrapper.h"
#include"Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Bike.h"
#include"Time.h"
#include"Payment_Status.h"
#include"Transaction_Info.h"
#include"Charge.h"
#include"Logger.h"
#include"Vacant_Places.h"
#include"Show_All_Vehicles.h"

bool Wrapper::admin_login(const Admin& admin)
{
	std::string name;
	std::cout << "\n\nENTER YOUR USER NAME : ";
	std::getline(std::cin, name);
	std::string p_word;
	std::cout << "ENTER YOUR USER PASSWORD : ";
	std::getline(std::cin, p_word);
	Logger logger;
	if (logger.check_login(admin, name, p_word) == false)
	{
		std::cout << "LOGIN UNSUCESSFUL SORRY.....\n\n";
		return false;
	}
	std::cout << "LOGIN SECESSFUL....\n\n";
	return true;
}
void Wrapper::set_charges()
{
	double charge_car,charge_bus,charge_bike;
	std::cout << "SET CHARGES/HOURS FOR CAR : ";
	std::cin >> charge_car;
	std::cout << "SET CHARGES/HOURS FOR BUS : ";
	std::cin >> charge_bus;
	std::cout << "SET CHARGES/HOURS FOR BIKE : ";
	std::cin >> charge_bike;
	Charge::set_charged_money(charge_car, charge_bus, charge_bike);
	std::cout << "ALL THE CHARGES ARE PUT SUCESSFULY......\n\n";
}
void Wrapper::park_vehicle()
{
	std::cout << "\nCHOOSE THE TYPE FROM BELOW.....";
	std::cout << "\n1. CAR";
	std::cout << "\n2. BUS";
	std::cout << "\n3. BIKE\n\n";
	int ch; std::cin >> ch;
	std::string name, plate_number;
	std::cin.ignore();
	std::cout << "ENTER THE NAME OF THE VEHICLE : ";
	getline(std::cin, name);
	std::cout << "ENTER THE PLATE NUMBER OF THE VEHICLE : ";
	std::cin >> plate_number;
	std::cout << "ENTER THE PLACE NUMBER WHERE YOU WANT TO INSERT : ";
	int ind; std::cin >> ind;
	std::shared_ptr<Vehicle> vehicle_ptr;

	if (ch == 1) {
		vehicle_ptr = std::make_shared<Car>(plate_number, name);
	}
	else if (ch == 2)
	{
		vehicle_ptr = std::make_shared<Bus>(plate_number, name);
	}
	else
	{
		vehicle_ptr = std::make_shared<Bike>(plate_number, name);
	}
	std::cout << "ENTER THE ENTRY TIME OF THE VEHICLE [ HRS : MINS : SECS ]: " << std::endl;
	int hrs, mins, secs;
	std::cin >> hrs >> mins >> secs;
	Time e_t;
	e_t.set_time(hrs, mins, secs);
	std::cout << "ENTER THE EXIT TIME OF THE VEHICLE [ HRS : MINS : SECS ]: " << std::endl;
	std::cin >> hrs >> mins >> secs;
	Time ex_t;
	ex_t.set_time(hrs, mins, secs);
	Payment_Status payment_status;
	vehicle_ptr->set_vehicle(e_t, ex_t, payment_status);
	this->parking_spot_1d.place_vehicle(ind, vehicle_ptr);
}
void Wrapper::unpark_vehicle()
{
	std::cout << "ENTER THE INDEX OF VEHICLE : ";
	int ind;
	std::cin >> ind;
	std::cout << "ENTER THE MONEY COLLECTED : ";
	double received_money; std::cin >> received_money;
	std::shared_ptr<Vehicle> vehicle=this->parking_spot_1d.unplace_vehicle(ind, received_money);
	if (vehicle == nullptr)
	{
		std::cout << "CAR UNPARKING UNSUCESSFUL......\n\n";
		return;
	}
	std::string sender_name = vehicle->get_vehicle_name();
	std::string info = "FROM-";
	info += sender_name;
	Transaction_Info transaction;
	transaction.set_info(received_money, info);
	this->transactions.push_back(transaction);
}
void Wrapper::show_available_places()
{
	Vacant_Places vacant_places;
	vacant_places.show_vacant_places(this->parking_spot_1d.get_slots());
}
void Wrapper::show_all_vehicles()
{
	Show_All_Vehicles show_all;
	show_all.show_all_vehicles(this->parking_spot_1d.get_slots());
}
void Wrapper::show_transaction_history()
{
	if (this->transactions.size() == 0)
	{
		std::cout << "NO TRANSACTION TO SHOW....SORRY....\n\n";
		return;
	}
	for (auto transaction : transactions)
	{
		transaction.show_info();
		std::cout << std::endl;
	}
}
std::vector<Transaction_Info> Wrapper::get_transactions() const
{
	return this->transactions;
}