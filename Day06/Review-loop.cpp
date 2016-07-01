//
// Created by Lee Jeonggeun on 2016. 7. 1..
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    string s;
    cin >> T;
    getline(cin, s);
    for(int i=0; i<T; i++){
        getline(cin, s);
        int len = s.length()+1;
        //len = 100000;
        //cout << len << endl;
        char* arr = new char[len];
        memset(arr, 0, sizeof(char)*len);
        //char arr[10000];
        strcpy(arr, s.c_str());
        char* b1 = new char[len];
        memset(b1, 0, sizeof(char)*len);
        char* b2 = new char[len];
        memset(b2, 0, sizeof(char)*len);
        int a=0;
        int b=0;
        for(int j=0; j<len; j++){
            if(j%2 == 1){
                b1[a++] = arr[j];
            }
            else{
                b2[b++] = arr[j];
            }
        }
        cout << b2 << " " << b1 << endl;
        free(arr);
        arr = NULL;
        free(b1);
        b1 = NULL;
        free(b2);
        b2 = NULL;
    }
    return 0;
}
