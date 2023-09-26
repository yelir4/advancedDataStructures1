#include <stdio.h>
#include <iostream>
using namespace std;

// random cpp demo project
// try output stream to print to user as well as basic arithmetic

int main() {
    int n, sum;
    n = 1;
    sum = 0;

    while (n<=100) {
        sum += n;
        n++;
    }

    cout << "sum: " << sum << endl;
    return 0;
}