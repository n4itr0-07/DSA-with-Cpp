#include <bits/stdc++.h>

using namespace std;

    // int sum(int a, int b) {
    //     int c = a + b;
    //     return c;

    // }

//TODO:  This will not swap and a b 
    // void swap(int a, int b) {
    //     int temp = a;
    //     a = b;
    //     b = temp;

    // }   

//TODO:  This will swap and a b
    void swapPointer(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;

    }  
int main() {

//FIXME:  This will not swap and a b
    // int a = 4, b = 5;
        
    // cout << "The value of a is  " <<a<< " and the value of b is " <<b<< endl;
    // swap(a, b);

    // cout << "The value of a is  " <<a<< " and the value of b is " <<b<< endl;
    // return 0;

//FIXME: This will swap and a b
    int a = 4, b = 5;
        
    cout << "The value of a is  " <<a<< " and the value of b is " <<b<< endl;
    swapPointer(&a, &b);

    cout << "The value of a is  " <<a<< " and the value of b is " <<b<< endl;
    return 0;

}

//TODO: This is call by reference