//COPYRIGHT 2019 BY BRANDON NORSWORTHY

#include "pch.h"
#include "ProgrammingChallenge.h"
#include <iostream>

int main();
void selectProgramChapter();
bool shouldRunAnotherProgram();
void breakConsole();

int main()
{
	int userInputChapterInt = NULL;
	bool shouldWhileContinueLooping = true;

	while (shouldWhileContinueLooping)
	{
		selectProgramChapter();
		shouldWhileContinueLooping = shouldRunAnotherProgram();
		system("CLS"); //clears the console, if this point is reached a new program is either going to be run or the program will be terminated.
	}
}

//Takes input from user to select corresponding chapter program to run asks for new input if chapter selected or error was wrong
void selectProgramChapter()
{
	bool shouldWhileContinueLooping = true;
	int Chapter = NULL;

	while (shouldWhileContinueLooping)
	{
		shouldWhileContinueLooping = false;

		std::cout << "Select a chapter to run: ";
		std::cin >> Chapter;

		breakConsole();

		switch (Chapter)
		{
		case 1:
			std::cout << "There are no challenges for Chapter " << Chapter << " please choose another option." << std::endl;
			shouldWhileContinueLooping = true;
			break;
		case 2:
			Chapter2();
			break;
			//TODO case 3 fill out in prep of chapter 3
		default:
			std::cout << "The option you chose is an invalid option please try again" << std::endl;
			shouldWhileContinueLooping = true;
			break;
		}
	}

	breakConsole();
	system("PAUSE");

	return;
}

//Asks the user if they would like to run another program and takes the input to make sure it is valid returning the choice that user made
bool shouldRunAnotherProgram()
{
	bool shouldRunAnotherProgramReturn = false;
	char userInputChoiceChar = NULL;

	while ((userInputChoiceChar != 'Y') && (userInputChoiceChar != 'N'))
	{
		std::cout << "Would you like to run another program? (Y/N):";
		std::cin >> userInputChoiceChar;
		userInputChoiceChar = toupper(userInputChoiceChar);
	}

	switch (userInputChoiceChar)
	{
	case 'Y':
		shouldRunAnotherProgramReturn = true;
		break;
	case 'N':
		shouldRunAnotherProgramReturn = false;
		break;
	default:
		std::cout << "The option you chose is an invalid option please try again" << std::endl;
		break;
	}

	return shouldRunAnotherProgramReturn;
}

//This puts a break in the console to help break up content you are seeing.
void breakConsole()
{
	std::cout << "--------------------------------------------------------------------------------------------------------------" << std::endl;
	
	return;
}
