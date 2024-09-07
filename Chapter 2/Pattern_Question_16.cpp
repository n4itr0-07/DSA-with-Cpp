
#include <iostream>
 using namespace std;


int main () {
    int n = 3;
    // cout << "Enter the number of elements : ";
    // cin >> n;
    int num = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << num << " ";
            num++;
        }
       cout << endl;
    }
    return 0;
}