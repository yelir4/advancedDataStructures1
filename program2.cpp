#include <stdio.h>
#include <iostream>
#include "string"
#include <iomanip> // for setw() function
using namespace std;

/**
*   coen 79 lab1 program2
*   takes inputs string of 10 digits (otherwise prompts invalid input)
*   outputs input and its reverse, using setw()
*/
int main() {
    string s, s2;
    bool valid;
    
    // force the user to input 10 digit string
    while(!valid)
    {
        valid = true;
        cout << "please type a string of 10 digits:" << endl;
        getline(cin, s);

        // check for correct string length
        if(s.length() == 10)
        {
            for(int i=0; i<10; i++)
            {
                // string is invalid if there is a non-numeric character
                if(!isdigit(s.at(i)))
                {
                    valid = false;
                    cout << "invalid input" << endl;
                    break;
                }
            }
        }
        
        // if the input is not 10 digits long, it is invalid
        else
        {
            valid = false;
            cout << "invalid input" << endl;
        }
    }

    // reverse the input
    for(int i=9; i>=0; i--)
    {
        s2 += s.at(i);
    }
    cout << endl;
    
    // print the result
    for(int i=20; i<25; i++)
    {
        cout << setw(i); // set field width
        cout << s;
        cout << setw(i);
        cout << s2 << endl;
    }
}