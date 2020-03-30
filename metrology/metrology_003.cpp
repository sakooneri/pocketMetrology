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







int main(void)
{ 
    char yORn;
  
    cout << "       _____     _____     _______________ _____      _____\n";
    cout << "      /    /    /    /    /              / \\    \\    /    /\n";
    cout << "     /    /    /    /    /    __________/   \\    \\  /    /\n";
    cout << "    /    /    /    /    /    /               \\    \\/    /\n";
    cout << "   /    /____/    /    /    /_____            \\        /\n";
    cout << "  /              /    /          /             \\      /\n";
    cout << " /    _____     /    /    ______/               /    /\n";
    cout << "/    /    /    /    /    /                     /    /  \n";
    cout << "    /    /    /    /    __________            /    /\n";
    cout << "   /    /    /    /              /           /    /\n";
    cout << "__/    /____/    /______________/           /____/\n"; 
    cout << "       ___                                         ___     \n";
    cout << "      /  /                                        /  / \n";
    cout << "     /  /                                        /  / \n";
    cout << "    /  / _      ______    __   __     ____      /  / __\n";
    cout << "   /  __  \\    / ____/   / /  / /      __ \\    /  ___  \\\n";
    cout << "  /  __/  /   / /       / /__/ /   /  __/ /   /  /  /  /\n";
    cout << " /______     /_/        \\____      \\___  /   /__/  /__/    \n";
    cout << "                                        /\n";
    cout << "                                   / / /\n";
    cout << "    are you metrologist?           \\__/\ny/n: ";
    
    cin >> yORn;
    
    if(yORn == 'n')
    {
        cout << "\n\nOh, sorry. My SD mode is in work now :( \n\n            Do you want to try SG mode? \n\ny/n: ";
        cin >> yORn;
    }
  
    if(yORn != 'y' & yORn != 'n')
    {
      cout << "u r not so smart, arencha?)";
    }
      
    if(yORn == 'y')
    {

        cout << "\n";
        cout << " Oh!  here is my:                       _      \n";
        cout << "               ___ _ __ ___   __ _ _ __| |_    \n";
        cout << "              / __| '_ ` _ \\ / _` | '__| __|  \n";
        cout << "              \\__ \\ | | | | | (_| | |  | |_  \n";
        cout << "              |___/_| |_| |_|\\__,_|_|   \\__|  _\n";
        cout << "       __ _ _   _ _   _   _ __ ___   ___   __| | ___ \n";
        cout << "      / _` | | | | | | | | '_ ` _ \\ / _ \\ / _` |/ _ \\\n";
        cout << "     | (_| | |_| | |_| | | | | | | | (_) | (_| |  __/\n";
        cout << "      \\__, |\\__,_|\\__, | |_| |_| |_|\\___/ \\__,_|\\___|\n";
        cout << "      |___/       |___/                              \n";

        while(true)
        {
            unsigned short int choice_parameter = 0;
            cout << "\n\nWhat are you looking for?\n1) Δ\n2) δ\n3) γ\n4) S\nYour choose is: "; 
            cin >> choice_parameter;


            //ERROR 1 wrong choice_parameter
            if(1 != choice_parameter & 2 != choice_parameter & 3 != choice_parameter & 4 != choice_parameter)
            {
                cout << "\nТЫ ЧЁ, ДОЛБОЁБ?\n";
            }


            //absolute error
            if(choice_parameter == 1)
            {
				Absolute_Error(choice_parameter);
				choice_parameter = 1;
            }


            //relative formula 
            if(choice_parameter == 2)
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


            //reduced error
            if(choice_parameter == 3)
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


            //Sensivity
            if(choice_parameter == 4)
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
        }
    }
} 
