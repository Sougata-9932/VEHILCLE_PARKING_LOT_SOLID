#include<iostream>

#include"Transaction_Info.h"

void Transaction_Info::set_info(const double &amount,std::string &info)
{
	this->amount = amount;
	this->info = info;
}
void Transaction_Info::show_info() const
{
	std::cout << this->amount << " " << this->info << std::endl;
}