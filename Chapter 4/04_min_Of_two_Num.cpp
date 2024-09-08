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