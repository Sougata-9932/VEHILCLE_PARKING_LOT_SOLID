#pragma once

#include<iostream>
#include<vector>

#include"Parking_Spot.h"
#include"Parking_Spot_1D.h"
#include"Transaction_Info.h"
#include"Charge.h"
#include"Admin.h"

class Wrapper
{
	Parking_Spot_1D parking_spot_1d;
	std::vector<Transaction_Info> transactions;
public:
	Wrapper(const int &cap):parking_spot_1d(cap){}
	bool admin_login(const Admin&);
	void set_charges();
	void park_vehicle();
	void unpark_vehicle();
	void show_available_places();
	void show_transaction_history();
	void show_all_vehicles();
	std::vector<Transaction_Info> get_transactions() const;
};