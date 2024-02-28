#include<iostream>

#include"User.h"

void User::set_user(const std::string& user_name, const std::string& password)
{
	this->user_name = user_name;
	this->password = password;
}
std::string User::get_user_name() const
{
	return this->user_name;
}
std::string User::get_password() const
{
	return this->password;
}