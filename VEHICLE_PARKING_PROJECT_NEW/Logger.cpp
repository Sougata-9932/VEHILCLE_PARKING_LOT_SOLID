
#include<iostream>

#include"Logger.h"
#include"Admin.h"

bool Logger::check_login(const Admin& admin, const std::string &user_name, const std::string &password)
{
	if (admin.get_user_name() == user_name && admin.get_password() == password)
	{
		return true;
	}
	return false;
}