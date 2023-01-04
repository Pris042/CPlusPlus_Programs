/*
    Author: Priscilia Babalola
    Date: 04/01/2023 (4th Jan 2023)

    About: Determines an employee's weekly wages. if the hours worked exceed 40, the wages include overtime payment 

    purpose: learn how to use and implement if....else(Two way selection)
*/

// required header files 
#include <iostream>
#include <iomanip>


using namespace std;

// main program 
int main() {

    double wages, rate, hours;

    // set output to be in fixed decimal number, to show all the decimal points including the zeroes and then set the amount of decimal to 2 decimal places (this allows accurate decimal poihnt with rounding )
    cout << fixed << showpoint << setprecision(2);

    // get user input as well as informing user what they need to enter and assigning to variables 
    cout << "Enter the number of working hours and your rate: ";
    cin >> hours >> rate; 
    cout << endl;

    // using the two - way selection, we can determine wages based on whether they worked more than 40 hourss 
    if (hours > 40.0) // if they work more than 40 hours, then they get paid an estra 1.5 on top of the normal 40 hour rate 
        wages = 40.0 * rate + 1.5 * rate * (hours - 40.0);
    else 
        wages = hours * rate; // if they didnt work more than 40 hours, then they get paid the normal rate 

    // output the data to screen for user ßß
    cout << "The Wages are $" << wages << endl;

    return 0;
}