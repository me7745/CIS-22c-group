#include <iostream>
#include <fstream>
#include <cstring>
#include "function.h"

using namespace std;

/*
This cpp file includes the function definitions of the function prototype 
that is defined in function.h
*/


void prelimDisplay()
{
	cout << "This program is designed to store info on the champions from" << endl;
	cout<< "League of Legends."<<endl << endl;
	cout << "The information includes: health, mana, etc." << endl;
	cout << "Team members include: " << endl;
	cout << "	Pro Team Coordinator: " << endl << "	BST Algorithims Specialist: " << endl << "	Hash List Algorithims Whiz: " << endl;
	cout << "	Screen Output expert: Kush Patel" << endl << "	File I/O Ace: " << endl;
}//end prelimDisplay Function

void displayMenuFunction()
{
	cout << "A. Add" << endl;
	cout << "D. Delete" << endl;
	cout << "S. Search" << endl;
	cout << "L. List" << endl;
	cout << "W. Write Data to file" << endl;
	cout << "C. Statistics" << endl;
	cout << "Q. Quit" << endl;
}//end display menu Function

void searchSubMenu()
{
	cout << "A. Find and display one element using the primary key" << endl;
	cout << "B. Find and display elements using the secondary key" << endl;
}//end search sub menu function

void listSubMenu()
{
	cout << "A. List unsorted data" << endl;
	cout << "B. List data sorted by the primary key" << endl;
	cout << "C. List data sorted by the secondary key" << endl;
	cout << "D. Special print, as an indented list" << endl;
}//end list sub menu function

void inputFunction()
{
	char userInput, userInput2;
	
	while (userInput != 'q')
	{
		displayMenuFunction();
		cout << "Enter a character for the item you want" << endl;
		cin >> userInput;
		userInput = tolower(userInput);
		if (userInput == 'a')
		{
			//add function
		}
		else if (userInput == 'd')
		{
			//delete function
		}
		else if (userInput == 's')
		{
			searchSubMenu();
			cout << "Enter a character for the item you want" << endl;
			cin >> userInput2;
			userInput2 = tolower(userInput2);
			if (userInput2 == 'a')
			{
				//find one element with primary key function
			}//end if statement

			else if (userInput2 == 'b')
			{
				//find and display elements using secondary key function
			}//end else if statement
		}//end else if statement
		else if (userInput == 'l')
		{
			//list function
		}//end else if statement
		else if (userInput == 'w')
		{
			//write to file function
		}//end else if function
		else if (userInput=='c')
		{
			//statistic function
		}//end else if function
	}//end while function
}//end input function
