
#include<iostream>
#include"Payment_Processor.h"
#include"Payment_Status.h"

double Payment_Processor::process_payment(const double& charged_money, const double& received_money)
{
	double due = (charged_money - received_money);
	return due;
}