// 面试高频题：解码方法
// wbzhang
// leetcode No.91

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        // 0- 特判
        int n= s.length();
        if(n==0 || (n>0 && s[0]=='0')) return 0; // 如果有n>=1，则第一个数字不能为0，否则为非法
        if(n==1 && s[0]!='0') return 1;

        int *dp = new int[n+1];
        dp[0] = 0;
        dp[1] = 1;//表示前i个字符的解码方法数

        for(int i=1;i<n;i++){
            if(s[i]=='0'){
                if(s[i-1]=='1' || s[i-1]=='2')
                    dp[i+1] = dp[i];
                else dp[i+1] = 0;
            }else if( s[i]>'6' && s[i]<='9'){
                // if(s[i-1]=='1' || s[i-1]=='2')
                    dp[i+1] = dp[i];
                // else
                    // dp[i+1] = dp[i-1]+2;
            }else{
                dp[i+1] = dp[i-1] + 2;
            }
        }

        int res = dp[n];
        delete[] dp;
        return res;
    }
};

int main()
{


    return 0;
}