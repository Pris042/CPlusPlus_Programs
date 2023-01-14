/*
    Author: Priscilia Babalola 
    Date: 05/01/2023 (5th January 2023)

    About: Program to determine the larger or largest of two or three numbers 
*/

#include <iostream>

using namespace std;

// function prototype 
double larger(double x, double y);
double compareThree(double x, double y, double z);

// main function 
int main() {

        // variables 
        double one, two; 

        // get user input 
        cout << "Enter two numbers: ";

        cin >> one >> two;
        cout << endl;

        cout << "The larger of " << one << " and " << two << " is " << larger(one, two) << endl;
        cout << "The largest of 43.48, 34.00, and 12.65 is " << compareThree(43.48,  34.00, 12.65) << endl;

    return 0;
}

double larger(double x, double y) {
    double max; 

    if (x >= y) 
        max = x;
    else 
        max = y;

    return max;
}

double compareThree (double x, double y, double z) {
        return larger(x, larger(y, z));
}