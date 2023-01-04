/*
    Author: Priscilia Babalola 
    Date: 04/01/2023 (4 Jan 2023)
    Program: Largest Number 

    About: compares integers and outputs the largest 
*/

#include <iostream>

using namespace std;

int main() {

    // variables 
    int num1, num2, largest;

    cout << "Enter any two integers: ";
    cin >> num1 >> num2;
    cout << endl;

    cout << "The two integers etered are " << num1 << " and " << num2 << endl;

    if(num1 > num2)
        cout << "The larger number is " << num1 << endl;
    else if (num2 > num1) 
        cout << "The larger number is " << num2 << endl;
    else 
        cout << "Both numbers are equal." << endl;
    
    return 0;

}