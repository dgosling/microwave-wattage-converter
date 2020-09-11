// microwave_watt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "watt.h"


using namespace std;

int main()
{
    watt wat;
    double watt1, watt2, time;
    int result;
    cout << "Enter wattage on instructions: " << endl;
    cin >> watt1;
    cout << "\nEnter the time in seconds on the instructions: " << endl;
    cin >> time;
    cout << "\nEnter your microwave wattage: " << endl;
    cin >> watt2;
    result = wat.convert(watt1, watt2, time);
    cout << "\n" << result << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
