// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
// F5 (or Debug > Start Debugging)
// Ctrl+F5 (or Debug > Start Without Debugging), console window stays open
// F10 (Step Over), line-by-line
// F11 (Step Into) works similarly to Step Over, except it steps into any functions called on the line of execution

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    int n;

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;

    Calculator c;

    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by zero" << endl;
            continue;
        } 
        else
        {      
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << endl;
    }

    return 0;
}


