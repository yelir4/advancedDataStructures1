#include <stdio.h>
#include <iostream>
#include <fstream> // read and write from files
using namespace std;

/**
*   coen 79 lab1 program3
*   take input file as command line argument
*   erase non alphanumeric characters in the file
*   convert words at least 10 characters long to uppercase and prints them
*/
int main(int argc, char *argv[]) {
    fstream file(argv[1]); // take file from argument
    string s, s2;
    char c;

    // we are opening __ file
    if(file.is_open())
    {
        cout << "opening " << argv[1] << endl;
    }

    // while there are still words in the file to assign to the string
    while(file >> s)
    {
        s2 = "";

        // iterate through the word, add alphanumeric characters to 's2'
        for(int i=0; i<s.length(); i++)
        {
            if(iswalnum(s.at(i)))
            {
                s2 += s.at(i);
            }
        }

        // if 's2' is sufficient length, convert to uppercase and print
        if(s2.length() >= 10)
        {
            for(int i=0; i<s2.length(); i++)
            {
                c = toupper(s2.at(i));
                cout << c;
            }
            cout << endl;
        }
    }

    file.close(); // close file
}