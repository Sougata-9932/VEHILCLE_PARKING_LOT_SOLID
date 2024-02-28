#pragma once

#include<iostream>

#include"Time.h"
#include"Payment_Status.h"

/// <summary>
/// "Vehicle" CLASS IS AN ABSTRACT CLASS FOR CLASSES LIKE : CAR , BIKE , BUS ETC.
///
/// </summary>
/// 
class Vehicle
{
protected:
	std::string v_name, v_plate_number;
	Time entry_time;
	Time exit_time;
	Payment_Status payment_status;
public:
	Vehicle():v_name(""), v_plate_number(""){}
	Vehicle(const std::string& name, const std::string& plate_number)
	{
		this->v_name = name;
		this->v_plate_number = plate_number;
	}
	void set_vehicle(const Time&, const Time&, const Payment_Status&);
	virtual std::string get_vehicle_name()const;
	virtual std::string get_vehicle_plateno()const;
	virtual Time get_entry_time() const;
	virtual Time get_exit_time() const;
	virtual Payment_Status get_payment_status();
	virtual std::string get_vehicle_type() const = 0;
	friend std::ostream& operator<<(std::shared_ptr<Vehicle>& vehicle, std::ostream&);
};