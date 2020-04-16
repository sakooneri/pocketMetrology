#include "formulas.h"
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

void Reletive_Error(unsigned short int choice_parameter)
{
	long double d;

	cout << "\nWich way would you choose?\n1) δ = (Δ / X) *100%\n2) δ = (Xn / X) * γ\nYour choose is: "; 
	cin >> choice_parameter;


	//ERROR 1 wrong choice_parameter
	if(1 != choice_parameter & 2 != choice_parameter)
	{
		cout << "\nТЫ ЧЁ, ДОЛБОЁБ?\n";
	}


	//basic formula
	if(choice_parameter == 1)
	{
		long double D;
		long double X;

		cout << "\n    (example: 19.1)\nEnterr the Δ = ";
		cin >> D;
		cout << "\nEnter the X = ";
		cin >> X;

		d = (D / X) * 100;

		cout << "\nδ = ";
		cout << d;
		cout << "%";
	}


	//reduced error relation formula 
	if(choice_parameter == 2)
	{
		long double X;
		long double Xn;
		long double Y;

		cout << "\n    (example: 19.1)\nEnter the Xn = ";
		cin >> Xn;
		cout << "\nEnter the X = ";
		cin >> X;
		cout << "\nEnter the Y = ";
		cin >> Y;

		d = (Xn / X) * Y;

		cout << "\nδ = ";
		cout << d;
		cout << "%";
	}
}
