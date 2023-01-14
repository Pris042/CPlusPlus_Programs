/*
    Author: Priscilia Babalola 
    Date: 14/01/2023 (14th January 2023)

    About: Returns desired number of fibonacci sequence
*/

// required libraries 
#include <iostream>

using namespace std;

// Function declaration 
int nthFibonacciNum(int first, int second, int position);

// main function 
int main() {

    // variables 
    int firstFibonacciNum;
    int secondFibonacciNum;
    int nthFibonacci;

    // Get user input for first two fibonacci numbers 
    cout << "Enter your first two Fibonacci numbers: ";
    cin >> firstFibonacciNum >> secondFibonacciNum;
    cout << endl;
    cout << "The first two Fibonacci numbers are " << firstFibonacciNum << " and " << secondFibonacciNum << endl;
    cout << "Enter the position of the desiered Fibonacci number: ";
    cin >> nthFibonacci;


    // output data and results to the screen 
    cout << "The Fibonacci number at position " << nthFibonacci << " is " << nthFibonacciNum(firstFibonacciNum, secondFibonacciNum, nthFibonacci) << endl;


    return 0; 

}

// function for determining fibonacci at nth position 
int nthFibonacciNum(int first, int second, int nthNum) {

    // variables 
    int current, counter; 

    // if-else loop to check the position and if it equals to the first position.
        if (nthNum == 1) {
            current = first;
        } else if (nthNum == 2) {
            current = second; 
        } else {
                counter = 3; // set counter to start at three after checking first and second position 

                while (counter <= nthNum) {
                    current = second + first;  // add the first value with the second value 
                    first = second; // assign the second value to the first value 
                    second = current; // assign the value in current to the second variable 
                    counter++; // increment the counter to update the current position 
                } // end while loop 
        }// end if-else koop 

        return current; // return the variable current as it would hold the value for the nth position 
}