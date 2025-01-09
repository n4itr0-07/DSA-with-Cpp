#include <iostream>
// #include <bits/stdc++.h> // This is a header file that includes all other header files
#include <list>
using namespace std;

int main() {

    list<int> l;
    
    // list<int> l = {1, 2, 3, 4, 5};  we can also initialize the list like this

    l.push_back(1);
    l.emplace_back(2); // emplace_back is faster than push_back as it constructs the object in place
    l.push_back(3);


    l.push_front(3);
    l.push_front(4);
    l.emplace_front(5); // emplace_front is faster than push_front as it constructs the object in place 

    l.pop_back(); // Remove the last element
    l.pop_front(); // Remove the first element

    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;
    

    return 0;
}