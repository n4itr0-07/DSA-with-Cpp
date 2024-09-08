#include <iostream>
using namespace std;

//TODO: Calculate sum of digits of a number



int digitSum(int num) {
    int digSum = 0;

    while(num > 0) {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}
int main() {

cout << "Sum = " << digitSum(2356) << endl;
return 0;
}