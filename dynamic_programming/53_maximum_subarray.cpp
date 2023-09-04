class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = INT_MIN;
        int max_end = 0;
        for(auto n : nums){
            max_end = max(n, max_end+n);
            res = max(res, max_end);
        }
        return res;
    }
};

//2023-09-02
//Yvecca
//53. Maximum Subarray
//Kadane's Algorithm
//Maintain a variable max_end that stores maximum sum contiguous subarray ending at current index
//and a variable res stores the maximum sum found so far