#include <iostream>
using namespace std;

int main()
{
    cout << "hello world" << endl;
    cout << "-------------------------------" << endl;

    int x;
    cout << "enter a number: ";
    cin >> x;
    cout << "Take number from user: " << x << endl;
    cout << "-------------------------------" << endl;

    int y;
    int z;
    cout << "enter a number : ";
    cin >> y;
    cout << "enter a number : ";
    cin >> z;
    cout << "the sum for the numbers: " << (z + y) << endl;
    cout << "-------------------------------" << endl;

    /*
    int: Usually 4 bytes (32 bits).
    char: Usually 1 byte (8 bits).
    float: Usually 4 bytes (32 bits).
    double: Usually 8 bytes (64 bits).
    */

    // -----------------------------
    // making app for calc the find the quotient and remaninder
    int num1;
    int num2;
    int quotient;
    int remainder;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    quotient = num1 / num2;
    remainder = num1 % num2;

    cout << "The quotient: " << quotient << endl;
    cout << "The remainder: " << remainder << endl;
    cout << "-------------------------------" << endl;

    // --------------------------------------------------
    int swapOne = 10;
    int swapTwo = 5;
    int newVariable = swapOne;
    swapOne = swapTwo;
    swapTwo = newVariable;

    cout << "swap One: " << swapOne << endl;
    cout << "swap Two : " << swapTwo <<endl;
    cout << "-------------------------------" << endl;

    return 0;
}