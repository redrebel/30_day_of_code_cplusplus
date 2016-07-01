//
// Created by Lee Jeonggeun on 2016. 7. 1..
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost, totalCost;
    double tip, tax;

    cin >> mealCost;
    cin >> tip;
    cin >> tax;

    totalCost = mealCost + mealCost*(tip/100) + mealCost*(tax/100);
    cout << "The total meal cost is "<< round(totalCost) << " dollars." << endl;
    return 0;
}