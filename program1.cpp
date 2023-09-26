#include <stdio.h>
#include <iostream>
#include "string"
using namespace std;

/**
*   coen 79 lab1 program1
*   takes user inputted text as string
*   outputs number of alphanumeric and non-alphanumeric characters in the string
*/
int main() {
    string s;
    int alphaNumerics=0, nonAlpha=0; // keep track of number of each type of character
    
    // ask for user input, input goes into 's'
    cout << "please type something:" << endl;
    getline(cin, s);

    // iterate through each character of the input
    for(int i=0; i<s.length(); i++)
    {
        // if character is alphanumeric, add to alphanumeric counter
        if(iswalnum(s.at(i)))
        {
            alphaNumerics++;
        }

        // ignoring spaces, otherwise add to non alphanumeric counter
        else if(!isspace(s.at(i)))
        {
            nonAlpha++;
        }
    }
    // print result
    cout << "input \'" << s << "\' has " << alphaNumerics << " alphanumeric characters and " << nonAlpha << " nonalphanumeric characters." << endl;
}