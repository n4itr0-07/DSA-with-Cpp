#include <bits/stdc++.h>

using namespace std;

int main() {
// Display This AP upto nth

    int num;
        cout << "Enter the value of n: ";
        cin >> num;
        for(int i = 1; i <= 2 * num - 1; i+=2)
        {
            cout << i << " ";
        }    


        return 0;
}