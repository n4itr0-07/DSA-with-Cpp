//TODO: LeetCode problem 137, titled "Single Number II", 

// Given an integer array nums where every element appears three times except for one, which appears exactly once, find the single element and implement the solution in O(n) time and O(1) space.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;
        
        for (int num : nums) {
            ones = (ones ^ num) & ~twos;
            twos = (twos ^ num) & ~ones;
        }
        
        return ones;
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 1, 0, 1, 99};  // Modify input for testing
    Solution solution;
    int single = solution.singleNumber(nums);
    cout << "The single number is: " << single << endl;
    return 0;
}


//FIXME:: Leetcode Code 

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ones = 0, twos = 0;
        
//         for (int num : nums) {
//             ones = (ones ^ num) & ~twos;
//             twos = (twos ^ num) & ~ones;
//         }
        
//         return ones;
//     }
// };
