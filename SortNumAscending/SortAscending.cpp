/*
    Author:Priscilia Babalola
    Date: 04/01/2023 (4th Jan 2023)

    About: Program that get user input for three numbers, sorts and outputw them in ascending number 

    input: Num1, Num2, Num3 
    Output: Num1, Num2, Num 3
*/

#include <iostream>

using namespace std;

int main() {

    // Variables 
    int num1, num2, num3;
    int temp;

    // get user input for values 
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    cout << "The numbers " << num1 << " , " << num2 << " , " << num3 << " arranged in ascending order are: ";

    // sort numbers into ascending 
    if (num2 < num1) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num3 < num1) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num3 < num2) {
         temp = num2;
        num2 = num3;
        num3 = temp;
    }

    cout << endl << num1 << endl << num2 << endl << num3;

    return 0;

}