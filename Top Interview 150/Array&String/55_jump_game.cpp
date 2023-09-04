class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ptr = 0;
        while(ptr < nums.size()-1){
            int best = 0;
            for(int i = 1; i<=nums[ptr];i++){
                if(i+ptr == nums.size()-1){
                    return true;
                }
                if(i + nums[i+ptr] > best + nums[ptr+best]){
                    best = i;
                }
            }
            if(best == 0){
                return false;
            }
            ptr += best;
        }
        return true;
    }
};

/**
 * 2023-09-04
 * Yvecca
 * 55. Jump Game
 * Greedy Algorithm
 * Always choose the largest valid step
 */