//COPYRIGHT 2019 BY BRANDON NORSWORTHY
#include "pch.h"
#include <iostream>
#include "Chapter2.h"
#include "Chapter2_Challenge1.h"
#include "Chapter2_Challenge2.h"
#include "Chapter2_Challenge3.h"
//#include "Chapter2_Challenge4.h"

//I wanted to create this file to handle choosing the challenges so I dont have to include a lot of header files and functions into the main cpp file
int validEntry();

void Chapter2() {
	int inputNumber = 0;
	bool shouldContinueLoopingSwitch = true;

	std::cout << "Enter the program number you would like to start: ";

	while (shouldContinueLoopingSwitch)
	{
		shouldContinueLoopingSwitch = false;
		switch (validEntry())
		{
		case 1:
			Chapter2_Challenge1();
			break;
		case 2:
			Chapter2_Challenge2();
			break;
		default:
			shouldContinueLoopingSwitch = true;
			break;
		}
	}
}

int validEntry()
{
	int userInputChallengeInt = NULL;

	while (userInputChallengeInt == NULL)
	{
			std::cin >> userInputChallengeInt;
	}

	return userInputChallengeInt;
}
