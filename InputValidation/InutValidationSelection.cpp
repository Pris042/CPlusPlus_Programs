/*
    Author: Priscilia Babalola
    Date: 04/01/2023 (4th Jan 2023)

    about: Form of input validation through if...else or just if statement 
*/

#include <iostream>

using namespace std;

int main() {

    // input validation for string 
    string firstName, lastName;
    char middleName;
    int age;

    cout << "Please enter your first name, middle name, last name and age: ";
    cin >> firstName >> middleName >> lastName;
    cin >> age;
    cout << endl;

    if (firstName != "a" && firstName != "A") {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Error - Please enter first name again ensuring it is an A: ";
        cin >> firstName; 
    }


    // input validation for char 
     if (middleName != 'a' && middleName != 'a') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Error - Please enter middle name again ensuring it is an A: ";
        cin >> middleName; 
    }

    //input validation for int 
     if (age < 0 && age > 100) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Error - Please enter age again ensuring it is greater than 0 and less than 100: ";
        cin >> age; 
    }

}