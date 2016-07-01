//
// Created by Lee Jeonggeun on 2016. 7. 1..
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int m, i;

void sub(int n){

    //cout << "n:" << n;
    if(n<=0){
        m = max(m,i);
        return;
    }
    else{
        int mod = n%2;
        if(mod==0){
            //cout << " " << m << " " << i << endl;
            m = max(m,i);
            i=0;
        }
        else{
            //cout << "++" << endl;
            i++;
        }
        sub(n/2);
    }

}

int main(){
    m = 0;
    i=0;
    int n;
    cin >> n;
    sub(n);
    cout << m;
    return 0;
}
