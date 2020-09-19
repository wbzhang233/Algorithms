#include "../common/common.h"

class Solution {
public:

    int rob(vector<int>& nums) {
        // 动态规划
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];

        int *dp = new int[n];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);

        for(int i=2;i<n-1;i++){
            dp[i] = max(dp[i-2]+nums[i],dp[i-1]);
        }

        int ans = dp[n-2];
        delete[] dp;
        return ans;
    }


};


int main()
{

    return 0;
}