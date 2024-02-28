#pragma once

#include<iostream>

#include"Payment_Status.h"

class Payment_Processor
{
public:
	double process_payment(const double& charged_money, const double& received_money);
};