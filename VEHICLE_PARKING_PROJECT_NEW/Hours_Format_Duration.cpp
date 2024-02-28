#include<iostream>

#include"Hours_Format_Duration.h"
#include"Time.h"

double Hours_Format_Duration::get_duration(const Time& en_t,const Time& ex_t)
{
	double res_1 = (ex_t.get_hours()) + (ex_t.get_mins() / (double)60) + (ex_t.get_secs() / 3600);
	double res_2 = (en_t.get_hours()) + (en_t.get_mins() / (double)60) + (en_t.get_secs() / 3600);
	return res_1 - res_2;
}
std::string Hours_Format_Duration::get_type() const
{
	return "Hours_Format_Duration";
}