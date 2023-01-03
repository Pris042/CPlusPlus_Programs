/*
    Author: Priscilia Babalola
    Date: 03/01/2023 

    Abour: usd to test the use of peek and putback functions 
    Description below
*/

#include <iostream>

using namespace std;

int main() {

    char ch;

    cout << "Enter a string: ";
    cin.get(ch);
    cout << endl;
    cout << "After first cin.get(ch);" << "ch = " << ch << endl;

    cin.get(ch);
    cout << "After second cin.get(ch); " << "ch = " << ch << endl;

    cin.putback(ch);
    cin.get(ch);
    cout << "After putback and then " << "cin.get(ch); ch = " << ch << endl; 

    ch = cin.peek();
    cout << "After cin.peek();  ch = " << ch << endl;

    cin.get(ch);
    cout << "After cin.get(ch); ch = " << ch << endl;

    return 0;

}

/*
    if input is "abcd"

    first cin.get(ch extracts first character from input stream and tores it in vriable, so the value would be 'a'

    second cin.get(ch) statement extracts the next characte from input stream whih is 'b'

    cin.putback(ch) puts the previous character extracted by the get (which is 'b') back into input stream 

    ch = cin.peek(); checks next character in in put stream, which is 'c' and the value of ch is now 'c'

    the third cin.get(ch) extracts next charactr which ic c 
*/