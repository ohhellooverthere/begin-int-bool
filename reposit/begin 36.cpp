// number 36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	setlocale(LC_ALL, "rus");
	int s1,s2,s3,v1,v2,t;
	cout << "s1=";
	cin >> s1 ; 
	cout<<"первоначальное расстояние между точками"<< endl;
	cout << "v1=";
	cin >> v1;
	cout << "скорость первого автомобиля" << endl;
		cout << "v2=";
		cin >> v2;
		cout << "скорость второго автомобиля" << endl;
		cout << "t=";
		cin >> t;
		cout << "Время" << endl;
		s3 = s1 + (t*(v1 + v2));
		cout << s3;










    ; 
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
