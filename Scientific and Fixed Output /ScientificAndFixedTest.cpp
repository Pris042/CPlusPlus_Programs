/*
    Author: Priscilia Babalola 
    Date: 03/01/2022 (3 Jan 2023)

    About: used to test and show how to use the maniupulators 'scientifi' and 'fixed' for practies 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double hours = 35.45;
    double rate = 15.00;
    double tolerance = 0.01000;

    // using the double data type that gives 15 decimal places. This is used asz a comparison to scintific and test decimal manipulator 
    cout << "hours = " << hours << ", rate = " << rate << ", py = " << hours * rate << ", tolerance = " << tolerance << endl << endl;
 
    // convert to scientific format to output in scientific form 
    cout << scientific;
    cout << "Scientific notation: " << endl; 
    cout << "hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl << endl;

    // cocnvert to fixed format t output
    cout << fixed;
    cout << "Fixed decimal notation: " << endl;
    cout << "hours = " << hours << ", rate = " << rate << ", pay = " << hours * rate << ", tolerance = " << tolerance << endl << endl;

    return 0;

}