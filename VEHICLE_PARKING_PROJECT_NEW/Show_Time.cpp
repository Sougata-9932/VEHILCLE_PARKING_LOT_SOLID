#include<iostream>

#include"Show_Time.h"
#include"Time.h"

/// <summary>
/// THIS METHOD WILL SHOW THE TIME 
/// </summary>
/// <param name="time"></param>
void Show_Time::show_time(const Time & time) const
{
	std::cout << "HRS: " << time.get_hours() << " || MINS : " << time.get_mins() << " || SECS : " << time.get_secs();
	std::cout << std::endl;
}