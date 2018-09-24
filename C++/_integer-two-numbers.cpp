#include <iostream>
using namespace std;

int main()
{
    // Variables
    int num;

    // Ask user to enter a number
    cout << "Enter the number 2 or 4: ";

    while (!(cin >> num) || ((num != 2) && (num != 4)))
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
    
    // Terminate program
    return 0;
}
