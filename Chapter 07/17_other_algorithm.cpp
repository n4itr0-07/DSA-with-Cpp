#include <iostream>
#include <vector>   
#include <algorithm>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    vector<int> vec = {50, 3, 90, 900, 10};

    reverse(vec.begin(), vec.end());   // reverse the vector

    for(auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    //TODO: Max algorithm

    cout << "Max element = " << *max_element(vec.begin(), vec.end()) << endl;

    //TODO: Min algorithm

    cout << "Min element = " << *min_element(vec.begin(), vec.end()) << endl;

    //TODO: Swap algorithm

    vector<int> vec2 = {1, 2, 3, 4, 5};
    swap(vec, vec2);

    for(auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    for(auto val : vec2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}