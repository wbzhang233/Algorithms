// 高频面试题：最长连续序列; 困难！
// wbzhang
// leetcode No.128

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// class Solution {
// public:      
//     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();

//         int **dp = new *int[n];
//         for(int i=0;i<n;i++){
//             *dp[i] = new int[n];
//         }

        

//     }
// };

class Solution {
public:
    unordered_map<int,int> a,b;
    int find(int x){
        return a.count(x)?a[x]=find(a[x]):x;
    }
    int longestConsecutive(vector<int>& nums) {
        for(auto i:nums)
            a[i]=i+1;
        int ans=0;
        for(auto i:nums){
            int y=find(i+1);
            ans=max(ans,y-i);
        }
        return ans;
    }
};




