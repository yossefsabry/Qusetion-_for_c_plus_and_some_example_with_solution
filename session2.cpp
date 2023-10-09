#include <iostream>
using namespace std;

int main()
{
    // C++ Program to Check Whether Number is Even or Odd
    int x = 5;
    if (x % 2 == 0)
    {
        cout << "It's Even" << endl;
    }
    else if (x % 2 == 1)
    {
        cout << "It's Odd" << endl;
    }
    else
    {
        cout << "It's Zero" << endl;
    }
    cout << "-------------------------------" << endl;

    // C++ Program to Find Largest Number Among Three Numbers
    int c = 100;
    int y = 200;
    int z = 300;

    if (c > y && c > z)
    {
        cout << "The number c is greater: " << c << endl;
    }
    else if (y > z && y > c)
    {
        cout << "The number y is greater: " << y << endl;
    }
    else if (z > y && z > c)
    {
        cout << "The number z is greater: " << z << endl;
    }
    else
    {
        cout << "The numbers are equal... " << endl;
    }
    cout << "-------------------------------" << endl;

    // C++ Program to check whether a number is positive, negative, or zero
    int num1 = 0;
    if (num1 > 0)
    {
        cout << "The number is positive" << endl;
    }
    else if (num1 < 0)
    {
        cout << "The number is negative" << endl;
    }
    else
    {
        cout << "The number is zero" << endl;
    }
    cout << "-------------------------------" << endl;

    // C++ Program to Check Whether a character is Vowel or Consonant.
    char chr = 'r';
    chr = tolower(chr);
    if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u')
    {
        cout << "It's a vowel." << endl;
    }
    else
    {
        cout << "It's a consonant" << endl;
    }
    cout << "-------------------------------" << endl;
    // Program to Find All Roots of a Quadratic Equation
    // bla bla
    
    return 0;
}
