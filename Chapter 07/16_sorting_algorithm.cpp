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

    //  int arr[5] = {50, 3, 90, 900, 10};
    //  sort(arr, arr+5);   // sort the array in ascending order

    //TODO: Same in Vector
    vector<int> vec = {50, 3, 90, 900, 10};
    sort(vec.begin(), vec.end());   // sort the vector in ascending order


    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;



    //TODO: Decreasing order

    sort(vec.begin(), vec.end(), greater<int>());   // sort the vector in descending order

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}