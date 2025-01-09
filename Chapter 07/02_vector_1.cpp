#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5}; //0
    // or
   // vector<int> vec1(8, 10); 

    // vec.erase(vec.begin() + 2); // 1 2 4 5

    vec.erase(vec.begin() + 1, vec.begin() + 3); // 1 4 5

    vec.insert(vec.begin() + 1, 2, 10); // 1 10 10 4 5

    // c.clear(); //0 clear the vector
    
    cout << "Is Empty: " << vec.empty() << endl; // Check if vector is empty or not


   // vector<int> vec2(vec1); //copy constructor
  //  cout << "vec2 = "; // This will print: vec2 = 10 10 10 

    // vec.push_back(10); //1
    // vec.push_back(20); //2
    // vec.push_back(30); //3

    // vec.pop_back(); // 5
    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    // cout <<vec.size() << endl; //0
    // vec.capacity(); //2

    //cout << "val at idx 2 = " << vec.at(2) << endl; //undefined
    // cout << "front = " << vec1.front() << endl;
    // cout << "back = " << vec1.back() << endl;


    return 0;
}