/*
    Author: Priscilia Babalola 
    Date: 04/01/2023 

    About: Program to compute and output the penalty on an unpaid credit card balance. The program assumes that the interest rate on the unpaid balance is 1.5% per month 

    Purpose: To learn and implememnt one way selection 
*/

#include <iostream>
#include <iomanip>

using namespace std;

// constant global variables 
double Interest_Rate = 0.015;

int main() {

    // variables 
    double creditCardBalance; // hold credit card balance from user input 
    double payment; // 
    double balance;
    double penalty = 0.0; // penalty rate for unpaid balance

    cout << fixed << showpoint << setprecision(2); // set decimal precisions for values (set to fixed with all zeros and a decimal point of two)

    cout << "Enter credit card balance: "; // output to director user input 
    cin >> creditCardBalance; // assign input to variable 
    cout << endl;

    cout << "Enter the payment: "; 
    cin >> payment; // assign innput 
    cout << endl; 

    balance = creditCardBalance - payment; // calulate remwainign balance by subtracting payment from the credit card balance 

    // one way selection 
    if (balance > 0 ) // if the balance is greater than zero then we calculate the interest rate of the balance not paid that month 
        penalty = balance * Interest_Rate; // remainder balance multiplies by the interest rate would result in the penalty amount to be added to the next payment to be paid for next month (including remaining balance from this month)
    
    // output the data to the screen 
    cout << "The balance is: $" << balance << endl; 
    cout << "The penalty to be added to your next month bill is: $" << penalty << endl; 

    return 0;


}