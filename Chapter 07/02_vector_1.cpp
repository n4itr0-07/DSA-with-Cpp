#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; //0

    vec.push_back(10); //1
    vec.push_back(20); //2
    vec.push_back(30); //3

    vec.pop_back(); //30
    for(int val : vec) {
        cout << val << " "<< endl;
    }
    cout << endl;
    // cout <<vec.size() << endl; //0
    // vec.capacity(); //2

    cout << "val at idx 2 = " << vec.at(2) << endl; //undefined

    return 0;
}