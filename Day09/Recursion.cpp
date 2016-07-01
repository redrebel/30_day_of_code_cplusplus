//
// Created by Lee Jeonggeun on 2016. 7. 1..
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main() {
    int i;
    cin >> i;
    int r = factorial(i);
    cout << r << endl;
    return 0;
}
