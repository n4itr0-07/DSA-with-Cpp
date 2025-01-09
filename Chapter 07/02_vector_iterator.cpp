#include <iostream>
// #include <bits/stdc++.h> // This is a header file that includes all other header files
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5}; //0
    vector<int>::iterator it;

    for(it = vec.begin(); it != vec.end(); it++) {
    cout << *it <<" ";
    }

    // cout << "Is Empty: " << vec.empty() << endl; // Check if vector is empty or not

    // Backward Iteration
    // vector<int>::reverse_iterator it1;
    // for(it1 = vec.rbegin(); it1 != vec.rend(); it1++) {
    //     cout << *it1 << " ";
    // }

    //Todo: auto keyword

    // for(auto it = vec.begin(); it != vec.end(); it++) {
    //     cout << *it << " ";
    // }

    return 0;
}