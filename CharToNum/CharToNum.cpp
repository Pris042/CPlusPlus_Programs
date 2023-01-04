/*
    Author: Priscilia Babalola
    Date: 04/01/2023 (4th Jan 2023)

    About: The prograsm prompts user to input an integer between 0 and 35. if the number is l;ess than or equal to 9, the program should output the number; otherwise, it should output A for 10 
    b for 11, c for 12 and so on til z for 35 

    input: num
    output: num
*/

#include <iostream>

using namespace std;

int main() {

    // variables 
    int num;

    // get user input 
    cout << "Enter a number between 0 and 35: ";
    cin >> num;
    cout << endl;

    // perform input validation 
    
    while (num > 35 || num < 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Error - you entered a value greater than 35 or less than 0";
        cin >> num;
    }

    // output num if it is less than 0 
    if (num <= 9) 
        cout << "Number: " << num;
    
    if (num >= 10) {
        char ch = static_cast<char> (num);
        cout << "The Value entered is: " << ch;
    }

    return 0;

}