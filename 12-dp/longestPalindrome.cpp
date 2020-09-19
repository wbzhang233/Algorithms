/* baidu面试真题 - 最长公共子串
* https://leetcode-cn.com/problems/longest-palindromic-substring/solution/zhong-xin-kuo-san-dong-tai-gui-hua-by-liweiwei1419/

*/
#include "../common/common.h"


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n<2) return s;
        // 动态规划
        vector<vector<bool> > dp(n,vector<bool>(n,false)); //dp[i][j]表示i-j为回文子串
        for(int i=0;i<n;i++){
            dp[i][i] = true;
        }

        // 统计dp[i][j]中为true的时候,j-i+1的最大值,双闭合区间
        int maxLength = 1; //最长回文子串长度
        int mI = 0; // 最长回文子串起始位置
        for(int i = n-2;i>=0;i--)
        {
            for(int j = i+1;j<=n;j++)
            {
                if(s[i]!=s[j]){
                    continue;
                }
                else if(s[i]==s[j] && j-i<3){ 
                    dp[i][j] = true; // i,j之间的差小于3时，判断s[i]==s[j]；
                }else{
                    dp[i][j] = dp[i+1][j-1]; // 取决于内部的串是否为回文
                }

                // 更新找到的最长回文子串
                if(dp[i][j] && (j-i+1)>maxLength ){
                    maxLength = j-i+1;
                    mI =i;
                }
            }
        }

        string res = s.substr(mI,maxLength);
        return res;
    }
};

int main()
{
    string s = "aaaa";
    Solution solu;
    cout<<solu.longestPalindrome(s)<<endl;

    return 0;
}