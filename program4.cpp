#include <stdio.h>
#include <iostream>
#include "string"
#include <ctime> // for time() function
#include <stdlib.h> // for rand() function
using namespace std;

/**
*   coen 79 lab1 program4
*   guess user number from 1-20
*   take user input (Y/N) case sensitive
*   output number of guesses to find the user's number
*/

int main()
{
    string s;
    cout << "please think of a number and press enter when ready:" << endl;
    getline(cin, s);

    int i, count;
    bool valid;
    int i2[20] = {0}; // keep track of numbers already guessed

    count = 0; // keep track of guesses
    valid = true;
    srand(time(0)); // initialize random number generator
    
    while(true)
    {
        // increment guess count
        if(valid)
        {
            count++;
            while(count < 20)
            {
                i = rand() % 20 + 1;
                if(i2[i] == 0) break; // continue guessing until correct
            }
            if(count == 20) break; // if all 20 numbers have been guessed the program will end
            cout << "is your number " << i << "? enter 'Y' if so, 'N' if not:" << endl;
        }

        getline(cin, s); // take user input
        if(s.compare("Y") == 0)
        {
            break;
        }
        
        else if(s.compare("N") == 0)
        {
            // continue looping
            valid = true;
            i2[i] = 1;
        }
        
        else
        { // if invalid input is received, loop without incrementing count
            cout << "i dont understand. please enter 'Y' or 'N'." << endl;
            valid = false;
        }
    }
    cout << "that took " << count << " tries." << endl; // print result
}