//Programmer: Kevin Rogers
//Assignment: CSS342 Lab 2
//Date:10/21/2015
// catalan.cpp : A program that takes input from the command line or user in the form of an interger and outputs the Catatlan number for that int
//

#include "stdafx.h"
#include "math.h"
#include <iostream>
using namespace std;


unsigned long int Catalan(unsigned long int n);

int main(int argc, char* argv[])
{

	unsigned long int input;

	if (argc == 2)				//checks to see if there is only 1 input in the cmd line
	{
		input = atoi(argv[1]);
	}	
	else
	{							//if more than 1 or 0 is inputed, it requests one from the user
		cout << "Please enter a valid positive number you want that Catalan number for: ";
		cin >> input;
	}

	cout <<Catalan(input) << endl;
	

    return 0;
}

unsigned long int Catalan(unsigned long int n)
{
	if (n <= 1)
	{
		return 1;
	}

	unsigned long int result = 0;

	for (int i = 0; i < n; i++)
	{
		result += Catalan(i)*Catalan(n - 1 - i);
	}

	return result;
}
