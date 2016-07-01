//
// Created by Lee Jeonggeun on 2016. 7. 1..
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string,string> m;
    int N;
    cin >> N;
    string s,c;
    for(int i=0; i<N; i++){
        cin >> s;
        cin >> c;
        m[s] = c;
    }
    /*
    map<string,string>::iterator it=m.begin();
    for(; it!=m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }*/

    for(int i=0; i<N; i++){
        string s1;
        cin >> s1;
        if(s1 == "") break;
        //cout << i << "=" << N << endl;
        map<string,string>::iterator it = m.find(s1);
        if(it != m.end()){
            cout << it->first << "=" << it->second << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }

    return 0;
}
