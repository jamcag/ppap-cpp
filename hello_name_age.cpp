#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name and age\n";
    string first_name = "???"; // string variable
    double age = 0; // numeric variable
    cin >> first_name; // read a string
    cin >> age; // read an integer
    double age_in_months = age * 12;
    cout << "Hello, " << first_name << " (age " << age_in_months << " months)\n";
}
