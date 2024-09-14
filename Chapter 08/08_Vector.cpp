//#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {

   // vector<int> vec = {1, 2, }
    //vector<int> vec (5, 0);
    // vector<char> vec = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    vector<int> vec;

    cout << "size = " <<vec.size() <<  endl ;
    
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "size after  = " <<vec.size() <<  endl ;

    vec.pop_back(); // 45

    // for(int i : vec) { // for each loop
    //     cout << i << endl;
    // }
    vec.push_back(55);
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << "capacity = " << vec.capacity() <<  endl ;
    cout << vec.at(2) << endl;
    
                                                               
    return 0;
}