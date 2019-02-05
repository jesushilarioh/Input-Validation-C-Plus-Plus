//********************************************
// This program check for valid user input.
// In this cas the user must enter an integer.
//
// By: Jesus HIlario Hernandez
// Last Updated: May 14th, 2018
//********************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int num;

    // Ask user to enter a number
    cout << "Enter your favorite number: ";

    // Error Checkin algorithim
    while (!(cin >> num))
    {
        // Explain error
        cout << "ERROR: a number must be entered: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(132, '\n');
    }
    // Display the number the user has entered
    cout << "Your favorite number is: " << num << endl;
    // Salutation
    cout << "Thanks. Bye." << endl;
    return 0;
}
