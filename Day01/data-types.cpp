//
// Created by Lee Jeonggeun on 2016. 7. 1..
//

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int ii;
    double dd;
    string ss;
    // Read and save an integer, double, and String to your variables.
    cin >> ii;
    cin >> dd;
    if(getline(cin >> ws, ss))
        getline(cin, ss);

    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + ii);
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + dd);
    // Concatenate and print the String variables on a new line
    printf("%s%s", s.c_str(), ss.c_str());
    // The 's' variable above should be printed first.

    return 0;
}