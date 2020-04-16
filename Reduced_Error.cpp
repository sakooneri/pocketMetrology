#include "formulas.h"
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

void Reduced_Error(unsigned short int choice_parameter)
{
	long double Y;

	cout << "\nWich way would you choose?\n1) γ = (Δ / Xn) * 100%\n2) γ = (X / Xn) * δ\nYour choose is: "; 
	cin >> choice_parameter;


	//ERROR 1 wrong choice_parameter
	if(1 != choice_parameter & 2 != choice_parameter)
	{
		cout << "\nТЫ ЧЁ, ДОЛБОЁБ?\n";
	}



	if(choice_parameter == 1)
	{
		long double D;
		long double Xn;

		cout << "\n    (example: 19.1)\nEnterr the D = ";
		cin >> D;
		cout << "\nEnter the Xn = ";
		cin >> Xn;

		Y = (D / Xn) * 100;

		cout << "\nγ = ";
		cout << Y;
		cout << "%";
	}



	if(choice_parameter == 2)
	{
		long double d;
		long double X;
		long double Xn;

		cout << "\n    (example: 19.1)\nEnter the δ = ";
		cin >> d;
		cout << "\nEnter the X = ";
		cin >> X;
		cout << "\nEnter the Xn = ";
		cin >> Xn;

		Y = (X / Xn) * d;

		cout << "\nγ = ";
		cout << Y;
		cout << "%";
	}
}
