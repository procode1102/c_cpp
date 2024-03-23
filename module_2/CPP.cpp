/*
 * Calculator.cpp
 *
 *  Date: [3/13/24]
 *  Author: [Aaron Bevans]
 */

#include <iostream>

using namespace std;

//void changed to integer function.
int main()
{
	char statement[100];
    
	int op1, op2;
	char operation;

    //adding semicolon to variable. removed double quotation marks.
	char answer = 'Y';

    //case-insensitive 
	while (answer == 'Y' || answer == 'y')
	{
		cout << "Enter expression" << endl;
		cin >> op2 >> operation >> op1;
        
        //removed semicolon.
		if (operation == '+')
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
            // << used for cout/output.
        
        
        //removed semicolon.
        if (operation == '-')
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
            // << used for cout/output.
			
        
        if (operation == '*')
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
            //added semicolon

        
        if (operation == '/')

            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
            //added semicolon
        

        //added (Y/N) to allow multiple options.
        cout << "Do you wish to evaluate another expression? (Y/N) " << endl;
        cin >> answer;
        
		
		
	}
    //added return statement.
    return 0;
}