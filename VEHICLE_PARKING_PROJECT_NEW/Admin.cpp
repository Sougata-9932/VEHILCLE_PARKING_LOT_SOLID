
#include<iostream>

#include"Admin.h"

void Admin::set_user()
{
	this->user_name = "SOUGATA123";
	this->password = "GhoshSougata@9932";
}
std::string Admin::get_user_type() const
{
	return "Admin";
}