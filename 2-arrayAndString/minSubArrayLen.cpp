//
// Created by wbzhang on 2020/8/14.
//
#include "../common/common.h"

class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		if(nums.size()==0) return 0;
		if(nums.size()==1) return s==nums[0]?1:0;
		// 双指针
		int lng = INT_MAX;
		int i=0,j=1;
		int currSum = nums[0]+nums[1];
		while(i<=j &&j<nums.size() ){
			if(currSum==s){
				lng = (j-i+1<lng)?j-i+1:lng;
				currSum += nums[++j];
			}else if(currSum<s){
				currSum += nums[++j];
			}else{
				currSum -= nums[i++];
			}
		}
		return lng;
	}
};

// 双指针法
class Solution2 {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int n = nums.size();
		if (n == 0) {
			return 0;
		}
		int ans = INT_MAX;
		int start = 0, end = 0;
		int sum = 0;
		while (end < n) {
			sum += nums[end];//压入
			while (sum >= s) {
				ans = min(ans, end - start + 1);
				sum -= nums[start];
				start++;
			}// 如果当前片段和大于s，则右移start减小当前和；直到当前和小于s
			end++; //当前和小于S，此时右移end
		}
		return ans == INT_MAX ? 0 : ans; //如果ans为INT_MAX,则标明未能找到任何片段
	}
};

class Solution3 {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int n = nums.size();
		if (n == 0) {
			return 0;
		}
		int ans = INT_MAX;
		vector<int> sums(n + 1, 0);
		// 为了方便计算，令 size = n + 1
		// sums[0] = 0 意味着前 0 个元素的前缀和为 0
		// sums[1] = A[0] 前 1 个元素的前缀和为 A[0]
		// 以此类推
		for (int i = 1; i <= n; i++) {
			sums[i] = sums[i - 1] + nums[i - 1];
		}
		for (int i = 1; i <= n; i++) {
			int target = s + sums[i - 1];
			auto bound = lower_bound(sums.begin(), sums.end(), target);
			if (bound != sums.end()) {
				ans = min(ans, static_cast<int>((bound - sums.begin()) - (i - 1)));
			}
		}
		return ans == INT_MAX ? 0 : ans;
	}
};


int main()
{
	int s;
//	s= 24;
//	vector<int> nums={2,5,6,15,7,8,9,10,13};

	s = 7;
	vector<int> nums={2,3,1,2,4,3};

	Solution3 solu;
	cout<<"ans:"<<solu.minSubArrayLen(s,nums)<<endl;
	return 0;
}