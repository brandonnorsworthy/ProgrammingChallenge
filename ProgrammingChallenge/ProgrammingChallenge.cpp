//COPYRIGHT 2019 BY BRANDON NORSWORTHY
// ProgrammingChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ProgrammingChallenge.h"
#include <iostream>

int main();
void selectProgramChapter(int Chapter);
bool shouldRunAnotherProgram();
void breakConsole();

int main()
{
	int userInputChapterInt = NULL;
	bool shouldWhileContinueLooping = true;

	while (shouldWhileContinueLooping)
	{
		std::cout << "Select a chapter to run: ";
		std::cin >> userInputChapterInt;

		selectProgramChapter(userInputChapterInt);
		shouldWhileContinueLooping = shouldRunAnotherProgram();
	}
}

//TODO function comment
void selectProgramChapter(int Chapter)
{
	bool shouldWhileLoopContinueLoopingReturn = true; //return variable //TODO remove this
	bool shouldWhileLoopContinueLoopingThis = false; //set to false since only default case needs to change the value

	breakConsole();

	while (shouldWhileLoopContinueLoopingThis)
	{
		shouldWhileLoopContinueLoopingThis = false;

		switch (Chapter)
		{
		case 1:
			std::cout << "There are no challenges for Chapter " << Chapter << " please choose another option.";
			Chapter = true;
			break;
		case 2:
			std::cout << "Select a challenge to run ('1' to '2'): ";
			std::cin >> Chapter;

			//TODO move this to other file program selections belong in chapter file
			switch (Chapter)
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
			//--------------------------------------

			std::cout << std::endl;
			break;
		//TODO case 3 fill out in prep of chapter 3
		default:
			std::cout << "The option you chose is an invalid option please try again" << std::endl;
			shouldWhileLoopContinueLoopingThis = true;
			break;
		}
	}

	breakConsole();
	system("PAUSE");
	system("CLS"); //clears the console, if this point is reached a new program is either going to be run or the program will be terminated.

	return;
}

//TODO function comment
bool shouldRunAnotherProgram()
{
	//TODO make this function ask user for input and return the input based on if they want to run it again or not
	return false;
}

//This puts a break in the console to help break up content you are seeing.
void breakConsole()
{
	std::cout << std::endl << "-------------------------------------------------------" << std::endl;
	
	return;
}
