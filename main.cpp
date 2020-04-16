#include "formulas.h"
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

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


            //relative error
            if(choice_parameter == 2)
            {
				Reletive_Error(choice_parameter);
				choice_parameter = 2;
            }


            //reduced error
            if(choice_parameter == 3)
            {
				Reduced_Error(choice_parameter);
				choice_parameter = 3;
            }


            //Sensivity
            if(choice_parameter == 4)
            {
				Sensivity(choice_parameter);
				choice_parameter = 4;
            }
			
			
			//Exit
			cout << "\n\nAre you want to EXIST?\ny/n: ";
			cin >> yORn;
			if(yORn == 'y')
			{
				break;
			}
			
			if(yORn != 'y' & yORn != 'n')
			{
			  cout << "\n\nu r not so smart, arencha?)\n";
			}
        }
    }
} 
