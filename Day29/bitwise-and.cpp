//
// Created by Lee Jeonggeun ( cjred77@gmail.com ) on 2016. 8. 13..
// https://www.hackerrank.com/challenges/30-bitwise-and
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


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        int maxR=0;
        cin >> n >> k;
        for(int i=1; i<=n; i++){
            for(int j = i+1; j<=n; j++){
                int r = i&j;
                if(r < k && r > maxR){
                    maxR = r;
                    //cout << r << endl;
                }
            }
        }
        cout << maxR << endl;
    }
    return 0;
}