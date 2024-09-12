#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = sizeof(nums) / sizeof(nums[0]);
    

    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++) {
        sum += nums[i];
        product *= nums[i];
    }

    cout << "Sum of all elements = " << sum << endl;
    cout << "Product of all elements = " << product << endl;

    return 0;
}
