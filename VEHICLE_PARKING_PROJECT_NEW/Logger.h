#pragma once

#include<iostream>

#include"Admin.h"

/// <summary>
/// THIS CLASS WILL CHECK IF THE LOGIN DATA IS VALID OR NOT 
/// </summary>
class Logger
{
public:
	bool check_login(const Admin&, const std::string&, const std::string&);
};