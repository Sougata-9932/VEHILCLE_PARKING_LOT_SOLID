#include<iostream>

#include"Minutes_Format_Duration.h"
#include"Time.h"

double Minutes_Format_Duration::get_duration(const Time& en_t, const Time& ex_t)
{
	double res_1 = (ex_t.get_hours() * (double)60) + (ex_t.get_mins()) + (ex_t.get_secs() / (double)3600);
	double res_2 = (en_t.get_hours() * (double)60) + (en_t.get_mins()) + (en_t.get_secs() / (double)3600);
	return res_1 - res_2;
}
std::string Minutes_Format_Duration::get_type() const
{
	return "Minutes_Format_Duration";
}