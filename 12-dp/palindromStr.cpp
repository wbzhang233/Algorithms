// https://leetcode-cn.com/problems/palindromic-substrings/
// Created by wbzhang on 2020/8/20.
//

#include "./common/common.h"

class Solution {
public:
	// 判断是否为回文串
	bool isParadin(string s,int l,int h)
	{
		while(l<h){
			if(s[l]!=s[h]) return false;
			l++,h--;
		}
		return true;
	}

	int countSubstrings(string s) {
		// 暴力搜索搜索长度为1-n的回文子串
		// 长度为1，n个
		if(s.length()<2 ) return s.length(); // 0或者1
		int ans = s.length(); //长度为1

		for(int i=2;i<=s.length() ;i++)
		{
			for(int start =0;start<=s.length()-i ;start++){
				if( isParadin(s,start,start+i-1) ) ans++;
			}
		}
		return ans;
	}

};

class Solution2 {
public:
	int countSubstrings(string s) {
		int n = s.size(), ans = 0;
		for (int i = 0; i < 2 * n - 1; ++i) {
			int l = i / 2, r = i / 2 + i % 2;
			while (l >= 0 && r < n && s[l] == s[r]) {
				--l;
				++r;
				++ans;
			}
		}
		return ans;
	}
};

int main()
{
	string s = "aaa";
	Solution2 solu;

	cout<<solu.countSubstrings(s)<<endl;

}