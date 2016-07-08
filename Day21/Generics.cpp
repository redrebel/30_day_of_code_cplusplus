//
// Created by Lee Jeonggeun ( cjred77@gmail.com ) on 2016. 7. 8..
// https://www.hackerrank.com/challenges/30-generics
//

#include <iostream>
#include <vector>

using namespace std;

template <class T>
void printArray(vector<T> &data){
    for(typename vector<T>::iterator it = data.begin(); it != data.end(); it++){
        cout << *it << endl;
    }
}


int main() {

    vector<int> vInt{1, 2, 3};
    vector<string> vString{"Hello", "World"};

    printArray<int>(vInt);
    printArray<string>(vString);

    return 0;
}