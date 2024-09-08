#include <iostream>
using namespace std;

int minOfTwo() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if(num1 < num2){
        return num1;
        } else {
        return num2;
    
    }
}
int main() {
    cout << "Min Of Two  Numbers Is : " << minOfTwo() << endl;
    return 0;

}

#include <iostream>
using namespace std;


// void evenOdd() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if(num % 2 == 0){
//         cout << num << " is an even number." << endl;
//     } else {
//         cout << num << " is an odd number." << endl;
//     }
// }
// int main () {
//     evenOdd();
//     return 0;
// } //TODO: First Method