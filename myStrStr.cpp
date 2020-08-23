//
// Created by wbzhang on 2020/8/18.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 双指针法
class Solution {
public:

	int bruteForce(const string &s1,const string &s2)
	{
		if(s1.length() <s2.length()) return -1;

		int i=0;
		while(i<=s1.length()-s2.length() )
		{
			int j=0;
			while(j<s2.length())
			{
				if( s1[i+j]==s2[j] ) j++;
				else break;
			}
			if(j==s2.length()) return i;
			i++;
		}

		return -1;
	}

};


bool ans = false;
// 路径
bool backTrack(vector<int> nums,int step)
{
	if(step==nums.size() ){
		return true;
	}

	bool ans = false;
	// 做选择
	for (int i = 0; i < nums[step]; ++i) {
		ans = ans|| backTrack(nums,step+nums[i]);
	}

	return ans;
}


int main()
{
//	string s1 = "hello";
//	string s2 = "ll";

	string s1= "aaaac";
	string s2 = "aac";

	Solution solu;
	cout<<solu.bruteForce(s1,s2)<<endl;
}