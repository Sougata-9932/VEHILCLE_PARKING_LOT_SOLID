#pragma once

#include<iostream>

class User
{
protected:
	std::string user_name;
	std::string password;
public:
	User():user_name(""),password(""){}
	void set_user(const std::string&, const std::string&);
	std::string get_user_name() const;
	std::string get_password()const;
	virtual std::string get_user_type() const = 0;
};