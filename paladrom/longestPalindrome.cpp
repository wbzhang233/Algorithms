#include "../common/common.h"


class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        // 动态规划
        vector<vector<bool> > dp(n,vector<bool>(n,false)); //dp[i][j]表示i-j为回文子串

        // 1.边界值i=0,j=0 2.不合法值为false 3.等于 4.
        for(int i=0;i<n;i++)
        {
            for(int j =i;j<n;j++)
            {
                if( i==j){
                    dp[i][j] = true;
                }else if( j=i+1 && s[i]==s[j] ){
                    dp[i][j] = true;
                }
                else if(i<j && s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j] = true;
                }
            }
        }
        // 统计dp[i][j]中为true的时候,j-i的最大值
        int maxLength = 0;
        int mI=0,mJ=0;
        for( int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dp[i][j] && (j-i)>maxLength ){
                    maxLength = j-i;
                    mI =i;
                    mJ =j;
                }
            }
        }
        string res = s.substr(mI,mJ-mI);
        return res;
    }
};

int main()
{
    string s = "babad";
    Solution solu;
    cout<<solu.longestPalindrome(s)<<endl;

    return 0;
}