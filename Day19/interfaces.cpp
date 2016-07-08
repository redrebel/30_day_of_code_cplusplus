//
// Created by Lee Jeonggeun ( cjred77@gmail.com ) on 2016. 7. 8..
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic{
public:
    virtual int divisorSum(int n)=0;
};


class Calculator: public AdvancedArithmetic{
public:
    int divisorSum(int n);
};

int Calculator::divisorSum(int n) {
    if(n<2){
        return 1;
    }

    int returnVal = 1+n;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            returnVal += i;
        }
    }

    return returnVal;
}

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}