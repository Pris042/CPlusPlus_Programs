/*
    Author: Priscilia Babalola
    Date: 04/01/2023 (4th Jan 2023)

    About: Program prompts user to input three numbers. The program outputs te number and a message saying whether or not it is positive, negative or, zero 
*/

#include <iostream>

using namespace std;

int main() {

    // variables 
    int Num; // variable to hold user number 

    // prompt and get user input 
    cout << "Please enter a number: ";
    cin >> Num;

    // Output number to screen 
    cout << "Number entered: " << Num;

    // check number to determine whether it is positive, negative and zero 
    if (Num == 0) // check if the number is equal to zero 
        cout << "The number entered is zero" << endl; // output message to inform user that the number is zero
    if (Num < 0) // check if the number is less than zero. This lets us know that it is negative 
        cout << "The number entered is negative" << endl; // output message to inform user that the number is negative
    if (Num > 0) // check if the number is greater than zero. This means it is positive 
        cout << "The number entered is positive" << endl; // output message to inform user that the number is positive

    return 0;
}