// integer 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL,"rus");
	/*С начала суток прошло N секунд (N — целое). Найти количество
полных часов, прошедших с начала суток.*/
	int N, A;
	cout << "N=";/*количество секунд*/
	cin >> N;
	A = N / 3600;
	switch (A) {
	case 1: {cout << "C начала суток прошёл " << A << " час "; break; }
	case 2:
	case 3:
	case 4:
	{cout << "C начала суток прошло " << A << " часа "; break; }
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	{cout << "C начала суток прошло " << A << " часов "; break; }

	default:
		cout << "прошло больше 24 часов";
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
