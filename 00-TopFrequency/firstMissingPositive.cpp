// 高频面试题:寻找无序序列中第一个缺失的正数
// created by wbzhang, 2020.09.21
// leetcode No.41

#include <iostream>
#include <vector>

using namespace std;

// 不考虑时空复杂度的常规解法
// 时间复杂度：两次遍历，0(2*N)
// 空间复杂度：O(N)
class Solution0 {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> vi(n,-1);

        for(int i=0;i<n;++i)
        {
            if(nums[i]>0 && nums[i]<=n )
                vi[nums[i]-1 ] = nums[i]; //vi[1-1] =1; 
        }

        for(int i=0;i<n;++i){
            if(vi[i]==-1)
                return i+1; //第i个数没出现，此处本应该为i+1
        }
        return n+1;
    }
};

/* 哈希表法：首先将不在范围内的数用n+1替换，其次，将对应位置的数用负号进行标记
* 时间复杂度：O(2*N),
* 空间复杂度：O(1)
*/
class Solution1 {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        // 将负数用n+1替换
        for(auto &ele:nums){
            ele = (ele<=0)?n+1:ele;
        }

        // 用负号做标记
        for(int i=0;i<n;++i){
            int num = abs(nums[i]);
            if(num<=n){
                nums[i] = -abs(nums[i]);
            }
        }

        // 遍历寻找第一个正数
        for(int i=0;i<n;++i){
            if(nums[i]>0) return i+1;
        }

        return n+1;
    }
};


class Solution2 {
public:
    int firstMissingPositive(vector<int>& nums) {
        int res = 0;

        int n = nums.size();
        bool flag = true; //表明没有越界数
        for(int i=0;i<n;++i)
        {
            if(nums[i]<0 || nums[i]>n ){
                flag = false;
                nums[i] = 0;
            }
            res = res^  ( (i+1)^nums[i] );
        }

        if(flag && res==0) res = n+1; //没有越界数并且res==0，则所有数均正常出现了
        if(!flag && res == n+1) res=1; //存在越界数，并且全越界
        return res;
    }
};



int main()
{
    // int a = 1,b =2;
    // int x = a^b;
    // cout<< x <<endl;

    vector<int> nums = {1,2,4,5,3};
    Solution1 solu;
    int fi = solu.firstMissingPositive(nums);
    cout<< fi <<endl;


    return 0;
}