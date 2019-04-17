// ProgrammingChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ProgrammingChallenge.h"
#include <iostream>

int main()
{
	char userCharInputChapter;
	char userCharInputChallenge;
	bool shouldSwitchLoop = true;

	while (shouldSwitchLoop)
	{
		std::cout << "Select a chapter to run ('1' to '2'): ";
		std::cin >> userCharInputChapter;
		switch (userCharInputChapter)
		{
		case '1':
			std::cout << "There are no challenges for Chapter " << userCharInputChapter << " please choose another option.";
			shouldSwitchLoop = true;
			system("PAUSE");
			break;
		case '2':
			std::cout << "Select a challenge to run ('1' to '2'): ";
			std::cin >> userCharInputChallenge;
			switch (userCharInputChallenge)
			{
			case '1':
				Chapter2_Challenge1();
				break;
			case '2':
				Chapter2_Challenge2();
				break;
			default:
				break;
			}
			std::cout << std::endl;
			system("PAUSE");
			break;
		default:
			std::cout << "The option you chose is an invalid option please try again" << std::endl;
			system("PAUSE");
			break;
		}
		system("CLS");
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
