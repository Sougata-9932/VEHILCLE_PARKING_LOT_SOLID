#pragma once

#include<iostream>

/// <summary>
/// THIS CLASS WILL KEEP THE PAYMENT STATUS OF ANY VEHICLE 
/// 
/// </summary>
class Payment_Status
{
	std::string info;
	double due;
public:
	Payment_Status():due(0),info("NOT_PAYED"){}
	void set_payment_status(const double&,const std::string&);
	std::pair<double, std::string> get_payment_status() const;
};