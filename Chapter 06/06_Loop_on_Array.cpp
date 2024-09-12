// #include <iostream>
// #include <climits>
#include <bits/stdc++.h>

using namespace std;
// FInd smallest/largest in arrays

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int index = -1; // Variable to store the index of the smallest element

    for(int i = 0; i < size; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
            index = i; // Update the index when a new smallest element is found
        }
        // smallest = min(nums[i], smallest); | this is also a method in place of if statement
    }

    cout << "SMallest = " << smallest << endl;
    cout << "Index of -15 is : " << index << endl;
    return 0;
}
