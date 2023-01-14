/*
    Author: Priscilia Babalola 
    Date: 14/01/2023 (14th January 2023)

    About: Determie whether a string is a palindrome or not
*/

#include <iostream>
#include <string>

using namespace std; 

// function declaration 
bool isPalindrome(string str);

int main() {

    // variable declaration 
    string str; 

    // get user input for potential palindrome 
    cout << "Enter a string to check if it is a palindrome: ";
    cin >> str; 
    cout << endl;

    // output whether string is a palindrome 
    if (isPalindrome(str) == 1) {
        cout << "is the word " << str << " a palindrome: True" << endl;
    } else {
       cout << "is the word " << str << " a palindrome: False" << endl;
    }

    return 0; 
}

bool isPalindrome(string str) {

    int length = str.length();

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }

    return true;
}