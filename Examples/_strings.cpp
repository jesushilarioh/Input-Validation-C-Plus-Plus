//********************************************************************
//This program displays a list of numbers and their squares.
//
//By: JESUS HILARIO HERNANDEZ
//Last Updated: May 14th, 2018
//********************************************************************
#include <iostream>
using namespace std;

int main()
{
    // Variables
    string stringChoice;

    // Ask for user inut
    cout << "Enter \"yes\" or \"no\": ";
    cin >> stringChoice;

    // Input Validate
    while (!(stringChoice == "yes" || stringChoice == "Yes") && !(stringChoice == "no"))
    {
        cout << "ERROR: You must type either \"yes\" or \"no\": ";
        // clear input stream
        cin.clear();
        // discard previous input
        cin.ignore(1200, '\n');
        // Re-enter choice again
        cin >> stringChoice;
    }

    cout << "You have enter: " << stringChoice << endl;

    return 0;
}
