/*
    Author: Priscilia Babalola 
    Date: 03/01/2023

    About: Program to practice the clear function through input failure 
*/

// required libraries 
#include <iostream>
#include <string>

using namespace std;

int main() {

    // Variables 
    string name;
    int age = 0;
    int weight = 0;
    double height = 0.0;

    cout << "Enter name, age, weight, and height: ";
    cin >> name >> age >> weight >> height;
    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Height: " << height << endl;
    cout << endl;

    cin.clear();

    cin.ignore(200, '\n');

    cout << "Enter name, age, weight, and height: ";
    cin >> name >> age >> weight >> height;
    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;
    cout << "Height: " << height << endl;

    return 0;

}