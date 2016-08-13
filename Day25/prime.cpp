//
// Created by Lee Jeonggeun ( cjred77@gmail.com ) on 2016. 8. 13..
// https://www.hackerrank.com/challenges/30-running-time-and-complexity
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;

    while(T --> 0){
        int n;
        cin >> n;

        bool isPrime = true;

        if(n == 1){
            isPrime = false;
        }
        else{
            for(int i = 2; i <= (int)sqrt(n) ; i++ ){
                if(n % i == 0){
                    isPrime = false;
                    break;
                }
            }
        }

        if(isPrime){
            cout << "Prime" << endl;
        }
        else{
            cout << "Not prime" << endl;
        }
    }
    return 0;
}