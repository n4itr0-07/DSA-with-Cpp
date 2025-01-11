#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    q.size(); //0
    q.empty(); //1
    q.emplace(10); //emplace is faster than push as it constructs the object in place


    return 0;
}