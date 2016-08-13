//
// Created by Lee Jeonggeun ( cjred77@gmail.com ) on 2016. 8. 13..
// https://www.hackerrank.com/challenges/30-nested-logic
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int fine = 0;
    int add, amm, ayyyy;

    cin >> add;
    cin >> amm;
    cin >> ayyyy;

    int edd, emm, eyyyy;

    cin >> edd;
    cin >> emm;
    cin >> eyyyy;

    if(eyyyy < ayyyy){
        fine = 10000;
    }
    else if((eyyyy == ayyyy) && (emm < amm)){
        fine = 500 * (amm - emm);
    }
    else if((eyyyy == ayyyy) && (emm == amm) && (edd < add)){
        fine = 15 * (add - edd);
    }
    else{
        fine = 0;
    }

    cout << fine << endl;
    return 0;
}