//*******************************************************
// This program check for valid user input.
// In this case in integer and the number from 1 thru 10.
//
// By: Jesus Hilario Hernandez
// Last Updated: May 14th, 2018
//******************************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int num;

    // Ask user to enter a number from 1 and 10;
    cout << "Choose a number from 1 to 10: ";

    // Receive user input and Error check
    while (!(cin >> num) || (num < 1 || num > 10))
    {
        // Explain Error
        cout << "ERROR: You must enter a number between 1 and 10: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }

    // Display number entered
    cout << "You've entered " << num << ". That's it!" << endl;
    // Salutation
    cout << "Thanks. Bye.!" << endl;
    return 0;
}
