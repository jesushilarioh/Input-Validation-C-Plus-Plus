#include <iostream>
#include <ctype.h>  // isdigit()
#include <sstream>  // stringstream
using namespace std;

int main() 
{
    string user_string_num = "";

    int is_num = 0,
        decimal_count = 0,
        user_converted_num;

    bool is_num_bool = 0;

    do
    {
        cout << "Enter a number: ";
        cin >> user_string_num;

        if (user_string_num[0] == '-') // jesus -8
            is_num++;

        if (user_string_num[0] == '0' && 
            isdigit(user_string_num[1])) // 0934939
            is_num = 0;
        else 
        {
            for (int i = 0; i < user_string_num.size(); i++)
            {
                if (isdigit(user_string_num[i]))
                    is_num++;
                if (user_string_num[i] == '.')
                    decimal_count++;
            }
        }

        if (decimal_count == 1) // 66.7 // 8..9.9.9..9.9
            is_num = 0;
        
        if (is_num == user_string_num.size()) 
        {
            stringstream str_stream_object(user_string_num);
            str_stream_object >> user_converted_num;

            is_num_bool = 1;

            cout << endl
                 << user_string_num << "(user_string_num) "
                 << "is a number!"  << endl
                 << user_converted_num << "(user_converted_num) "
                 << "is a number!"  << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Number must NOT contain spaces.\n"
                 << "Number must NOT contain letters.\n"
                 << "Number must NOT contain symbols.\n"
                 << "Number must NOT be a decimal number.\n" 
                 << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            is_num_bool     = 0;
            is_num          = 0;
            decimal_count   = 0;
        }


    } while (is_num_bool == 0);
    

    return 0;
}