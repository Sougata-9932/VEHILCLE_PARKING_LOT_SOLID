#pragma once

#include<iostream>

#include"User.h"

class Admin : public User
{
public:
	void set_user();
	std::string get_user_type() const override;
};