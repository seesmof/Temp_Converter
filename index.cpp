// include necessary libraries
#include <iostream>
using namespace std;

// declare global variables
double temp, F, C;
char type;

// create function to greet the user
void GREET()
{
    cout << "Enter F if you use Fahrenheit or C if you use Celsius: ";
    cin >> type;
}

// create function to convert F to C
void C_CALC()
{
    cout << "Enter the temperature outside: ";
    cin >> temp;

    C = ((temp - 32) * 5) / 9;
    cout << "Current temperature is " << C << " degrees Celsius." << endl;
}

// create function to convert C to F
void F_CALC()
{
    cout << "Enter the temperature outside: ";
    cin >> temp;

    F = ((temp * 9) / 5) + 32;
    cout << "Current temperature is " << F << " degrees Fahrenheit." << endl;
}

// start main function
int main(int argc, char **argv)
{
    // output program title
    cout << "***************** TEMPERATURE CONVERTER *****************" << endl
         << endl;

    // execute greeting function that also containts the temperature input
    GREET();

    // execute F converter if C is entered
    if (type == 'C' || type == 'c')
    {
        F_CALC();
    }
    // execute C converter if F is entered
    else if (type == 'F' || type == 'f')
    {
        C_CALC();
    }
    // if neither C nor F is entered, exit program
    else
    {
        cout << "Please enter a valid symbol" << endl;
    }

    // output program end title
    cout << endl;
    cout << "*********************************************************" << endl;

    // end main function
    return 0;
}