#include "formulas.h"
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
void Sensivity(unsigned short int choice_parameter)
{
	long double S;
	
	cout << "\nWich way would you choose?\n1) S = 1/c\n2) S = ΔY / ΔX\n3) S = (ΔY / Y) / (ΔX / X)\nYour choose is: "; 
	cin >> choice_parameter;


	//ERROR 1 wrong choice_parameter
	if(1 != choice_parameter & 2 != choice_parameter & 3 != choice_parameter)
	{
		cout << "\nТЫ ЧЁ, ДОЛБОЁБ?\n";
	}



	if(choice_parameter == 1)
	{
		long double c;

		cout << "\n    (example: 19.1)\nEnter the c = ";
		cin >> c;

		S = 1 / c;

		cout << "\nS = ";
		cout << S;
	}



	if(choice_parameter == 2)
	{
		long double c;
		long double DY;
		long double DX;

		cout << "\n    (example: 19.1)\nEnter the c = ";
		cin >> c;
		cout << "\n    (example: 19.1)\nEnter the DY = ";
		cin >> DY;
		cout << "\n    (example: 19.1)\nEnter the DX = ";
		cin >> DX;

		S = DY / DX;

		cout << "\nS = ";
		cout << S;
	}



	if(choice_parameter == 3)
	{
		long double DX;
		long double X;
		long double DY;
		long double Y;

		cout << "\n    (example: 19.1)\nEnterr the DX = ";
		cin >> DX;
		cout << "\n    (example: 19.1)\nEnterr the X = ";
		cin >> X;
		cout << "\n    (example: 19.1)\nEnterr the DY = ";
		cin >> DY;
		cout << "\n    (example: 19.1)\nEnterr the Y = ";
		cin >> Y;

		S = (DY / Y) / (DX / X);

		cout << "\nS = ";
		cout << S;
	}
}
