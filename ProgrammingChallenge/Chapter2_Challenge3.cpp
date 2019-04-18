//COPYRIGHT 2019 BY BRANDON NORSWORTHY
#include "pch.h"
#include <iostream>

/*
Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent, and the county sales tax is 2 percent.
*/

void Chapter2_Challenge3() {
	int totalSales = 8600000;
	double generatedSalesPercent = 0.58;

	std::cout << "Prediction: " << int(totalSales * generatedSalesPercent);

	return;
}