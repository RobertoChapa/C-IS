/ factorial_v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
/// factorial.cpp : Defines the entry point for the console application.

//#include "stdafx.h"
#include "pch.h"
#include "iostream"

using namespace std;

long long findFactorial(long long f);

int main()
{
	bool t = true;
	long long f;

	while (t == true)
	{
		cout << "Input f: " << endl;
		cin >> f; //If user enters anything other than an integer f return 0

		if (f == 0)
		{
			t = false;

			cout << endl << "END" << endl << endl;
		}
		else
		{
			f = findFactorial(f);

			cout << endl;
			cout << "The factorial is " << f << endl << endl;
		}
	}

	return 0;
}

long long findFactorial(long long f)
{
	long long p = 0, h = 1;

	for (int i = 1; i < f + 1; i++)
	{
		p = i * h; h = p;
	}

	return p;
}

