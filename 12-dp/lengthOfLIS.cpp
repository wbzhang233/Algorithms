class Solution {
public:

    // 常规解法-最长上升子串
    int lengthOfLIS2(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return n;
        int maxLength = 1;
        int currLength = 1;
        int start = 0;

        for(int i=1;i<n;i++){
            // 比较当前和前一数字，如果上升，则+1;
            // 否则，更新，同时改变currLength
            if(nums[i]>nums[i-1]){
                currLength++;
            }else{
                maxLength = max(maxLength,currLength);
                currLength =1;
            }
        }
        return maxLength;
    }

    // 动态规划-最长上升子序列
    // 用
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return n;
        int *dp = new int[n];
        dp[0]=1; 

        // 如果当前
        int maxLength = 1;

        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1]){
                dp[i] = dp[i-1]+1;
            }else dp[i] = dp[i-1];
            maxLength = max(maxLength,dp[i]);
        }
    
        delete[] dp;
        return maxLength;
    }

};