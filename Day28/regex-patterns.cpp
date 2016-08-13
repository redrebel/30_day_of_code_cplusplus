//
// Created by Lee Jeonggeun ( cjred77@gmail.com ) on 2016. 8. 13..
// https://www.hackerrank.com/challenges/30-regex-patterns
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

/*
bool compareNoCase (string first, string second)
{
  int i=0;
  while ((i < first.length()) && (i < second.length()))
  {
    if (tolower (first[i]) < tolower (second[i])) return true;
    else if (tolower (first[i]) > tolower (second[i])) return false;
    i++;
  }

  if (first.length() < second.length()) return true;
  else return false;
}
*/
int main(){
    int N;
    cin >> N;
    //set<string> sortedItems;
    list<string> fList;

    for(int a0 = 0; a0 < N; a0++){
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        int nIndex = emailID.rfind("@gmail.com");
        if(nIndex >= 0){
            fList.push_back(firstName);
        }
    }
    fList.sort();
    list<string>::iterator it;
    for(it = fList.begin(); it != fList.end(); it++){
        cout << *it << endl;
    }
    return 0;
}
