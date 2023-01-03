/*
    Author: Priscilia Babalola 
    Date: 03/01/2023 (1st Jan 2023)

    About: basic structure for file reading or writing 
*/

// Libraries / header files 
#include <fstream> // required for reading / writing to files 
    // can add more header files shoul you need 

using namespace std; // not required unless usin #include <iostream>

int main() {

    // declare file stream variables
    ifstream inData;
    ofstream outData;


    // ope th files 
    inData.open("prog.dat"); // open input file. if file is not in the sme directory then put path to file 
    outData.open("prog.out");

        // code for data manipulation 
            // reading the file OR writing to the file 

    // close the files 
    inData.close();
    outData.close();

    return 0;

}

