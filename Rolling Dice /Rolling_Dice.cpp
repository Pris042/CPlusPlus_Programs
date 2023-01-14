/* 
    Author: Priscilia Babalols
    Date: 14/01/2022 (14th Januay 2023)

    About: Function that rolls a pair of dice untill the sum of numbers rolled is a specific number. Also counts number of time dice rolled till desired sum is reached 
*/

#include <iostream>
#include <cstdlib>

using namespace std;

// function declaration 
int rollDice(int  num);

int main() {
     
    // variables 
    int num;

    // get input and do input validation check 

    do {

    cout << "Enter the number you would like the two dice to equal to: ";
    cout << "(Should be between 2 and 12)";
    cout << endl; 
    cin >> num;
    cout << endl;

    } while (num > 12 || num < 2);
    

    // output the data 
    cout << "The number of times the dices had to be rolled to get the sum " << num << " is: " << rollDice(num) << endl;

    return 0;
}

int rollDice(int num) {

    int dice1, dice2, sum;
    int rollCount = 0; 

    srand(time(0));

    do {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        rollCount++;

    } while (sum != num);

    return rollCount;
}