#include "formulas.h"
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

void Absolute_Error(unsigned short int choice_parameter)
{
	long double D;

	cout << "\nWich way would you choose?\n1) Δ = Α - X\n2) Δ = (δ × X) / 100%\n3) Δ = (γ × Xn) / 100%\nYour choose is: "; 
    cin >> choice_parameter;


    //ERROR 1 wrong choice_parameter
    if(1 != choice_parameter & 2 != choice_parameter & 3 != choice_parameter)
    {
		cout << "\nТЫ ЧЁ, ДОЛБОЁБ?\n";
    }


    //basic formula
    if(choice_parameter == 1)
    {
        long double A;
        long double X;

        cout << "\n    (example: 19.1)\nEnter the A = ";
        cin >> A;
        cout << "\nEnter the X = ";
        cin >> X;

        D = A - X;

        cout << "\nΔ = ±";
        cout << D;
    }


    //relative error relation formula 
    if(choice_parameter == 2)
    {
        long double d;
        long double X;

        cout << "\n    (example: 19.1)\nEnterr the δ = ";
        cin >> d;
        cout << "\nEnter the X = ";
        cin >> X;

        D = (d * X) / 100;

		cout << "\nΔ = ±";
		cout << D;
	}


	//reduced error relation formula 
	if(choice_parameter == 3)
	{
		long double Y;
		long double Xn;

		cout << "\n    (example: 19.1)\nEnter the γ = ";
		cin >> Y;
		cout << "\nEnter the Xn = ";
		cin >> Xn;

		D = (Y * Xn) / 100;

		cout << "\nΔ = ±";
		cout << D;
	} 
}
