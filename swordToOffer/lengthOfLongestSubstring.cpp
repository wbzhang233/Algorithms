// 剑指offer 48
// Created by wbzhang on 2020/8/17.
//

#include "../common/common.h"

class Solution {
public:
	// 傻瓜方法，暴力破解
	void bruteforce(string s,int &ans){
		unordered_set<int> st;
		// 从第i位，往后数,直到遇到重复数
		for(int i=0;i<s.size();i++){
			st.clear();
			int count =0,j=i;
			while(j<s.size() && !st.count(s[j]) ){
				st.insert(s[j]);
				count++;
				j++;
			}
			ans = max(ans,count);
		}
	}

	// 动态规划
	void dblPtr(string s,int &ans){
		unordered_map<char,int> mp;
		int curr_lng = 0;
		for(int i=0;i<s.size();i++){
			// 没出现过或者上次位置在最长范围之外，则加入
			if(mp.find(s[i])==mp.end() || i-mp[s[i]]>curr_lng){
				curr_lng++;
			}
			// 上次位置在最长范围之内，则更新该段的最长长度
			else{
				ans= max(ans,curr_lng);
				// 同时，记录最新的不重复子串长度
				curr_lng = i-mp[s[i]]; // a,b,c,d,a,c -->更新4，记录
			}
			mp[s[i]]=i; //记录当前字符最新出现的下标
			ans =max(ans,curr_lng);
		}

	}

	// 双指针：滑动窗口


	int lengthOfLongestSubstring(string s) {
		int ans = 0;
		// bruteforce(s,ans);
		dblPtr(s,ans);

		return ans;
	}
};

int main()
{
	string s ="abcdeacbc";
	Solution solu;
	cout<<solu.lengthOfLongestSubstring(s)<<endl;

	return 0;
}