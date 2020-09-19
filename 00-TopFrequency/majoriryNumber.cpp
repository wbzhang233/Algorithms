// 主元素：https://www.jianshu.com/p/9841425259e7
// Created by wbzhang on 2020/8/22.
//
#include "./common/common.h"

vector<int> majorityElement(vector<int>& nums)
{
	vector<int>ans;
	int n = nums.size();
	if(n<1)return ans;
	int cnt1=0,cnt2=0,tmp1=nums[0],tmp2=nums[0];
	for (int i = 0; i < n; i++) {
		if (nums[i] == tmp1)
			cnt1++;
		else if (nums[i] == tmp2)
			cnt2++;
		else if (cnt1 == 0) {
			tmp1 = nums[i];
			cnt1 = 1;
		} else if (cnt2 == 0) {
			tmp2 = nums[i];
			cnt2 = 1;
		} else {
			cnt1--;
			cnt2--;
		}
	}
	ans.push_back(tmp1);
	ans.push_back(tmp2);
	return ans;
}

int main()
{
	vector<int> nums = { 1,2,3,6,6,6,6,6,2,7,8,6,6,9,6,1,2,7,8,10,12};
	// { 1,2,3,6,6,6,6,6,2,7,8,9,6,6,6,1,2,7,8,10,12};

	vector<int> res;
	int n=10;
	while(n>0){
		res = majorityElement(nums);
		for(auto ele : res) cout<<ele<<"\t";
		cout<<endl;
		n--;
	}


	return 0;
}