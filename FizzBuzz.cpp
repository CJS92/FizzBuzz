// FizzBuzz.cpp : Defines the entry point for the console application.
// Assignment for IT2040.
// Cody Sloan
// 01/22/2019

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Pause()
{
	string junk, extraNewLine;
	cout << endl << endl << "Press Enter to continue...";
	cin.ignore();
	getline(cin, junk);
}




int main()
{
	// Begin execution
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
			cout << "FizzBuzz\n";
		else if ((i % 3) == 0)
			cout << "Fizz\n";
		else if ((i % 5) == 0)
			cout << "Buzz\n";
		else
			cout << i << "\n";
	}

	// Freeze the screen so we can read it
	Pause();

	// Exit with no error
    return (0);
}

