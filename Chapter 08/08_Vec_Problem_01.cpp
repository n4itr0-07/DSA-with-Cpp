//TODO: LeetCode problem 136, titled "Single Number", Given a non-empty array of integers where every element appears twice except for one, find that single element.
// You must implement the solution with a linear runtime complexity (O(n)) and use only constant extra space (O(1)).

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int num : nums) {
            result ^= num;
        }
        return result;
    }
};

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};  // You can modify this input
    Solution solution;
    int single = solution.singleNumber(nums);
    cout << "The single number is: " << single << endl;
    return 0;
}

//FIXME: Leetcode Code Below

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int result = 0;
//         for(int num : nums) {
//             result ^= num;
//         }
//         return result;
//     }
// };
