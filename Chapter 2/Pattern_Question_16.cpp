
#include <iostream>
 using namespace std;


int main () {
//TODO: Number Pattern
    // int n = 3;
    // // cout << "Enter the number of elements : ";
    // // cin >> n;
    // int num = 1;

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << num << " ";
    //         num++;
    //     }
    //    cout << endl;
    // }
//TODO: Alphabet Pattern
    int n = 3;  // Size of the matrix
    char ch = 'A';  // Initialize ch only once before the loops

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ch << " ";  // Print the current character
            ch++;  // Increment the character to the next letter
        }
        cout << endl;  // Move to the next line after each row
    }
    return 0;
}