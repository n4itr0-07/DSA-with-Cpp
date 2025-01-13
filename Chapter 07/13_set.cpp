#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    s.erase(3); // Erase the element 3 from the set
    cout << "After erasing 3" << endl;
    for(auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Count = " << s.count(5) << endl;
    return 0;
}