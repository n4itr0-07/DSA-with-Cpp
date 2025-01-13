#include <iostream>
#include <set>
using namespace std;

int main() {

    multiset<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    s.insert(3); // Duplicate elements allowed in multiset

    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    s.erase(3); // Erase all the elements with value 3 from the set

    return 0;

}