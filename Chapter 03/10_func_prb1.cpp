#include <iostream>
using namespace std;


// Function to add two numbers
int sum(int a, int b){
    return a+ b;
}
int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int b;
    cout << "Enter another number: ";
    cin >> b;

    cout << "The Addition Of Two Given Numbers is " << sum(a, b) << endl;
}