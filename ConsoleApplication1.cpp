// Pick your Adventure.cpp : Defines the entry point for the console application.
//Joey Reyna
//Create a new console project.
//Add a function called GetTextFromUser that takes a string as the prompt you wish to display to the user and returns a string.
//Add a function named GetNumbersFromUser that takes a string as the prompt you wish to display to the user and returns an integer.
//Add any more functions that you may need.
//Your main function should control all the other functions.
//Comment your source code file(.CPP) well.
//Once the program is working have tested it a few times, create a new repository in your GitHub account for your program.
//Add your solution and files to your new Repository on GitHub.
//Take a screenshot of this project in GitHub.
//Take a screenshot of the program working.


#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <time.h>
//Namespace
using namespace std;
string GetTextFromUser(string prompt);
int GetNumbersFromUser(string prompt);
void OutputStory(string name, string food, string weapon, string limb, int luckyNumber, int randomNumber);
bool CheckVictory(int luckyNumber, int randomNumber);
//main function

void main()
{
	cout << "\tGalaxy Travler!!\n";
	srand(static_cast<unsigned int>(time(0))); // seeds random number 
	int randomNumber = rand() % 100 + 1; //random number between 1 and 100 into variable
	string name = GetTextFromUser("Greeting Travler! please give me your galaxy name: \n"); // GetTextFromUser into a varia
	string weapon = GetTextFromUser("What kind of weapon does your starship have? \n"); // Stores the return of GetTextFromUser into a variable
	string limb = GetTextFromUser("What body part could you live without? \n"); // Stores the return of GetTextFromUser into a variable
	string food = GetTextFromUser("What would your last meal be? \n"); // GetTextFromUser into a variable
	int luckyNumber = GetNumbersFromUser("What is your Glaxay ID number? \n"); // Stores the return of GetNumbersFromUser into a variable
	OutputStory(name, food, weapon, limb, luckyNumber, randomNumber); // Calls the OutputStory function and sends all your variables into it as parameters
	system("pause"); // pause system when program finishes all tasks
}

string GetTextFromUser(string prompt) //  GetTextFromUser function
{
	string text; //  store the user input
	cout << prompt; // output prompt
	cin >> text; // get input from user 
	return text; // Return the variable
}

int GetNumbersFromUser(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num; // Return the variable
}
void OutputStory(string name, string food, string weapon, string limb, int luckyNumber, int randomNumber) // This is the body of OutputStory, it takes all the main function variables as parameters
{
	// =story
	cout << "Start Date 111.ET.43\n";
	cout << "ALERT\n";
	cout << name << " I am detecting enemy space monkeys inbound from jupiter!!!\n";
	cout << "You look towards you at the Ship HUD and notice six or seven larger monkeys are enclosing on your position and with banana guns!!!\n";
	cout << "You hear your onbaord A.I state " << weapon << " is online! PREPARE TO ENGAGE IN COMBAT SIR!!.\n";
	cout << "You can now see the enemy they are rigth on top of you!\n";
	cout << "You decide to make the first move and engage boosters and lock on! \n";

	if (CheckVictory(luckyNumber, randomNumber) == true) // victory check 
	{
		//Story below
		cout << "You quickly fire your " << weapon << " as you fly in circles around the monkeys\n";
		cout << "you soon realize that you have the upper hand and you are destroying them.\n";
		cout << "You hear over your coms that they are surrendering! \n Victory is yours! Congradulations!\n";
		cout << "You put your ship on autopilot and go back to you kitchen and make you self a victory plate of " << food;
	}
	else // if the checkvictory return was anything but true do the below
	{
		//Story below
		cout << "Unable to react quick enough a space monkey ship shoots a missle right at your ship!\nIt connects and a large explosion rings out...\n\nyou wake up to find that you are missing your " << limb << "\n";
		cout << "You soon realize that your navigation and communaction devices are busted... you are lost in space!\n";
		cout << "\tGAME OVER...\n";
	}
}

bool CheckVictory(int luckyNumber, int randomNumber)
{
	if (luckyNumber >= randomNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}