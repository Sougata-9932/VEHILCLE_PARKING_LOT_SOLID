#pragma once

#include<iostream>

class Transaction_Info
{
	double amount;
	std::string info;
public:
	Transaction_Info():amount(0),info("NOT-PAYED"){}
	void set_info(const double&,std::string&);
	void show_info() const;
};