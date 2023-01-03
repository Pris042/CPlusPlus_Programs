/*
    Author: Priscilia Babalola 
    Date: 03/p01/2023 

    About: Program that takes input in twso lengths; feet and inches.The lengths are then converted into centimeters and outputted.
*/

#include <iostream>

using namespace std;

const int Feet_To_Inches = 12;
const double Inches_To_Centimeters = 2.54;

int main() {

    int feet;
    int inches;
    int totalInches = 0;
    double centimeters;

    // get input values for the two variables feet and inches 
    cout << "Enter a value in feet" << endl;
    cin >> feet;

    cout << "Enter a value in inches" << endl;
    cin >> inches;

    // convert the feet into inches and add it to the existing inches value entered by the user 
    totalInches = (feet * Feet_To_Inches) + inches;  // to convert feet to inches, we multiply by 12

    // output the total amount of inches to the screen 
    cout << "The total amoun of inches is: " << totalInches << " inches" << endl;

    // convert the total amount of inches to centimeteres 
    centimeters = totalInches * Inches_To_Centimeters;

    //output the conversion of inches to centimeters 
    cout << "The conversion of inches to centimeters, results in " << centimeters << " cm" << endl;

    // end program 
    return 0;



}
