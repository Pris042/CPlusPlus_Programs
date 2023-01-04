/*
    Author: Priscilia Babalola
    Date: 04/01/2023 (4 jan 2023)

    About: calculates customers bill for a local cable company. There are two types of customers bill; Residential ans Business with each having ts own rate 
        Residential Customer
            Bill processing fee = $4.50 
            Basic service fee = $20.50 
            Premium channels = $7.50 
        
        Business Customer 
            Bill processing = $15.00
            Basic Service fee = $75.00 for the first 10 connections, $5.00 eacj for additonal connection 
            Premium Channels = $50.00 per channels for any number of connections 

    Input: Account number, customer code, number of remium channels, number of basic service connection 
    output: customer's account number and billing amount 
*/

// required header files 
#include <iostream>
#include <iomanip>
#include <cassert>
#include <string>

using namespace std;

// constant variables 
double Residential_Bill_Processing = 4.50;
double Residential_Basic_Service = 20.50;
double Residenial_Premium_Channels = 7.50;

double Business_Bill_Processing = 15.00;
double Business_Basic_Service_Ten = 75.00;
double Business_Basic_Service_Add = 5.00;
double Business_Premium_Channels = 50.00;

int main() {

    // variables 
    int accountNumber;
    char customerCode;
    int noBasicConnections;
    int noPremiumConnections;
    double amountDue;

    // set precision of decimal places
    cout << fixed << showpoint << setprecision(2);

    // get user input for account number and customer type 
    cout << "Please enter account number: ";
    cin >> accountNumber;
    cout << "Please enter customer code (R = Residential, B = Business): ";
    cin >> customerCode; 
    cout << endl;

    // check input 
    while (customerCode != 'r' && customerCode != 'R' && customerCode != 'b' && customerCode != 'B') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Error - Please enter customer code (R = Residential, B = Business): ";
        cin >> customerCode; 
        cout << endl;
    } 

    switch (customerCode)
    {
        case 'r':
        case 'R':

            // get how many premium connections the users wants

            cout << "Enter amount of premium connections required: ";
            cin >> noPremiumConnections;
            cout << endl;

            amountDue = Residential_Bill_Processing + Residential_Basic_Service + noPremiumConnections * Residenial_Premium_Channels;

            cout << "Account number: " << accountNumber << endl;
            cout << "The total amount due for basic connection and " << noPremiumConnections << " premium connections is $" << amountDue << endl;
            
            break;

        case 'b':
        case 'B' :
            // get how many premium and basic conncections required 
            cout << "Enter amount of basic connections required: ";
            cin >> noBasicConnections;
            cout << "Enter amount of premium connections required: ";
            cin >> noPremiumConnections;
            cout << endl;

            if (noBasicConnections <= 10) {
                amountDue = Business_Bill_Processing + Business_Basic_Service_Ten + noPremiumConnections * Business_Premium_Channels;
            } else
                amountDue = Business_Bill_Processing + Business_Basic_Service_Ten + (noBasicConnections - 10) * Business_Basic_Service_Add + noPremiumConnections * Business_Premium_Channels;

            // output data 
            cout << "Account number: " << accountNumber << endl;
            cout << "The total amount due for " << noBasicConnections << " basic connection and " << noPremiumConnections << " premium connections is $" << amountDue << endl;

            break;

        default:
            cout << "Error - You have entered an invalid customer type! \nTerminating Program.......\nThank you for using the program"<< endl;

            break;
    }


    return 0;

}