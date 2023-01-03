/*
    Author: Priscilia Babalola 
    Date: 03/01/2023 

    About: Program  that takes input as any change in cents, then computes number of half-dollars, quarters, dimes, nickels 
    and pennies to be returned, returning as many half-dollars as posible, then quarters, dimes, nickels and pennies. 

*/

#include <iostream>

using namespace std;

const int Half_Dollar_Coin = 50;
const int Quarter_Coin = 25;
const int Dime_Coin = 10;
const int Nickel_Coin = 5;
const int Pennies_Coin = 1;

int main() {

    // Declare Variables 
    int Change;
    int HalfDollars, Quarters, Dimes, Nickels, Pennies;

    // output user instruction and get change amount 
    cout << "Please enter a Change amount" << endl;
    cin >> Change;

    cout << "Change Amount: " << Change << endl;

    // calculate the amount of coins required
        // Half-Dollar 
        HalfDollars = Change / Half_Dollar_Coin;
        Change = Change % Half_Dollar_Coin;
        cout << "Half-dollars = " << HalfDollars << endl;

        // Quarter 
        Quarters = Change / Quarter_Coin;
        Change = Change % Quarter_Coin;
        cout << "Quarters = " << Quarters << endl;

        // Dime
        Dimes = Change / Dime_Coin;
        Change = Change % Dime_Coin;
        cout << "Dimes = " << Dimes << endl;

        // Nickel 
        Nickels = Change / Nickel_Coin;
        Change = Change % Nickel_Coin;
        cout << "Nickel = " << Nickels << endl;

        // Pennies 
        Pennies = Change / Pennies_Coin;
        Change = Change % Pennies_Coin;
        cout << "Pennis = " << Pennies << endl;

    return 0;
}