#include <iostream>

using namespace std;

int main() {
    pair<int, int> p1 = make_pair(1, 12);
    pair<int, int> p2 = make_pair(9, 12);
    pair<string, int> p3 = make_pair("Hello", 12); // We can make any type of pair

    //TODO: pair of pairs
    pair<int, pair<int, int>> p4 = make_pair(1, make_pair(2, 3));

    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;

    //TODO: Accessing pair of pairs
    cout << p4.first << " " << p4.second.first << " " << p4.second.second << endl;

    //TODO: Same for vectors
    //  vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};
    // for(pair<int, int> val : vec) {
    //     cout << val.first << " " << val.second << endl;
    // }


    return 0;
}