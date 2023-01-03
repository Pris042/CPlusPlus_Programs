
#include <iostream> // call library to allow use of cin, cout and endl

using namespace std; // removes the need to do std::cout. making code shorter and more organised 

int main() {

    // variables - require user input to assign values 
    string firstName; // variable or first name 
    string lastName; // variable for the last name 
    int age; // varable to hold age 
    double weight; // variable to hold weight 

    // output instructions to the screen for user 
    cout << "Enter first name, last name, age,"
        << "and weight, seperated by spaces."
        << endl;

    // get user input and assign to the variables in specific order 
    cin >> firstName >> lastName; // stirng variables 
    cin >> age >> weight; // numerical values 

    //output details to the screen 
    cout << "Name: " << firstName << " "
        << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "Weight: " << weight << endl;

    return 0;
}