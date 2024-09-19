//TODO: The problem you're referring to, LeetCode 169, is "Majority Element". It requires finding the majority element in a given array, where the majority element is the element that appears more than n/2 times (where n is the size of the array).

// Here’s a C++ solution for this problem using the Boyer-Moore Voting Algorithm, which works in linear time (O(n)) and constant space (O(1)):

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    // Step 1: Find a candidate for majority element using Boyer-Moore algorithm
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Step 2: Since the problem guarantees that there is a majority element,
    // no need to verify the candidate. Return it directly.
    return candidate;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
    cout << "Majority element is: " << majorityElement(nums) << endl;
    return 0;
}


//FIXME: Leetcode Code Below

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int count = 0;
//         int candidate = 0;

//         // Find the candidate for the majority element
//         for (int num : nums) {
//             if (count == 0) {
//                 candidate = num;
//             }
//             count += (num == candidate) ? 1 : -1;
//         }

//         return candidate;
//     }
// };