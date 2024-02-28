
#include<iostream>

#include"Payment_Status.h"

void Payment_Status::set_payment_status(const double& due, const std::string& info)
{
	this->due = due;
	this->info = info;
}

std::pair<double, std::string> Payment_Status::get_payment_status() const
{
	return { due,info };
}