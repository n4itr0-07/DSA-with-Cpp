#include <iostream>
#include <stack>
#include <vector> // optional
#include <list> // optional
#include <deque> // optional

using namespace std;

int main() {
    stack<int> s;
    // stack<int, vector<int>> s; // optional
    // stack<int, list<int>> s; // optional
    // stack<int, deque<int>> s; // optional

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    s.size(); //0
    s.empty(); //1
    s.emplace(10); //emplace is faster than push as it constructs the object in place
    s.swap(s); //swaps the elements of two stacks

    return 0;
}

