#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> d = {1, 2, 3, 4, 5}; //0

    d.push_back(6); // 1 2 3 4 5 6
    d.push_front(0); // 0 1 2 3 4 5 6
    d.pop_back(); // 0 1 2 3 4 5
    d.pop_front(); // 1 2 3 4 5


    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}