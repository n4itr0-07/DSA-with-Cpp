#include <iostream>
#include <vector>
using namespace std;

// Return pair in sorted array with target sum

vector<int> pairSum(vector<int> nums, int target) { // O(n)
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = -1;

    while(i < j) {
        int pairSum = nums[i] + nums[j];
        if(pairSum > target) {
            j--;
        } else if(pairSum < target) {
            i++;
        } else {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
        
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}