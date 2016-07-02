//
// Created by Lee Jeonggeun on 2016. 7. 2..
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
private:
    vector<int> elements;

public:
    int maximumDifference;
    // Add your code here
    Difference(vector<int> elements){
    this->elements = elements;
    }
    void computeDifference(){
        int size = elements.size();
        int min_element = 100;
        int max_element = 0;

        for(int i=0; i<size; i++){
            min_element = min(min_element, elements[i]);
            max_element = max(max_element, elements[i]);
        }
        this->maximumDifference = max_element - min_element;
    }

}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}