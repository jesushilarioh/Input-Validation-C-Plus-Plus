//*****************************************
// This program check for valid user input.
// In this case a double must be entered.
//
// By: Jesus Hilario Hernandez
// Last Updated: May 14th, 2018
//*****************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    double num;

    // Ask user to enter a number
    cout << "Enter you favorite number: ";

    // Error check and receive user input
    while (!(cin >> num))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }

    // Display user's number
    cout << "Your favorite number is: " << num << endl;
    // Salutation
    cout << "Good bye! Thanks" << endl;
    return 0;
}
