#include <iostream>
using namespace std;

int main()
{
    // Program To  Calculate Sum of Natural Numbers 
    int n;
    int sum = 0;

    cout << "Enter a positve number: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << "Sum of natural numbers from 1 to " << n << " is " << sum << endl;
    cout << "-------------------------------" << endl;

    // C++ Program to Find Factorial
    int factorial = 5;
    int total = 1;
    for (int i = 1; i <= factorial; i++)
    {
        total = total * i;
    }
    cout << "the factorial for " << factorial << " is : " << total << endl;
    cout << "-------------------------------" << endl;

    //.C++ Program to Generate Multiplication Table
    int numberForTable;
    cout << "Enter A Number For The Table: \n";
    cin >> numberForTable;
    cout << "Multiplication Table of " << numberForTable << ":" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << numberForTable << " * " << i << " = " << (numberForTable * i) << '\n';
    }

    cout << "-------------------------------" << endl;

    // C++ Program to Display Fibonacci Series
    int firstNumber = 0, secondNumber = 1, sumSeriers = 0, Limits;
    cout << "Enter the limits for the series: ";
    cin >> Limits;
    for (int i = 0; i <= Limits; i++)
    {
        if (i == 0 || i == 1)
        {
            cout << i << " ,";
        }
        sumSeriers = firstNumber + secondNumber;
        firstNumber = secondNumber;
        secondNumber = sumSeriers;
        cout << sumSeriers << " ,";
    }

    return 0;
}
