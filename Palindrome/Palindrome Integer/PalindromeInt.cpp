/*
    Author: Priscilia Babalola 
    Date: 14/01/2023 (14th January 2023)

    About: Determie whether a integer is a palindrome or not
*/

#include <iostream>
#include <string>

using namespace std; 

// function declaration 
bool isPalindrome(int num);
int reverseNum(int num);

int main() {

    // variable
    int num;

     // get user input for potential palindrome 
    cout << "Enter a string to check if it is a palindrome: ";
    cin >> num; 
    cout << endl;

    // output whether string is a palindrome 
    if (isPalindrome(num) == 1) {
        cout << "is the number: " << num << " a palindrome: True" << endl;
    } else {
       cout << "is the number: " << num << " a palindrome: False" << endl;
    }

    return 0; 
}

bool isPalindrome(int num) {

    // call function to reverse integer
    int n = reverseNum(num);
    
    if (num == n) {
        return true;
    }

    return false;
}

int reverseNum(int num) {

    // variables 
    int digit;
    int n = num;
    int reverseNum = 0;

    // reverse the number, so we can compare it with origial 
    do {
        digit = n % 10;
        reverseNum = (reverseNum * 10) + digit;
        n = n / 10;

    } while (n != 0);

    return reverseNum;
}