//COPYRIGHT 2019 BY BRANDON NORSWORTHY
#include "pch.h"
#include <iostream>

/*
The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year.
*/

void Chapter2_Challenge2() {
	int totalSales = 8600000;
	double generatedSalesPercent = 0.58;

	std::cout << "Prediction: " << int(totalSales * generatedSalesPercent);

	return;
}