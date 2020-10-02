// 高频面试题：分割回文串
// wbzhang 0922
// Leetcode No.131

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 判断一个字符串的子串是否为回文子串
bool isPaladrom(string &str, int fi, int len)
{
    for (int l = fi, r = fi + len - 1; l <= r; ++l, --r)
    {
        if (str[l] != str[r])
            return false;
    }
    return true;
}

// 回溯
void backTrack(vector<vector<string>> &res, string &str, int fi, vector<string> &vecstr)
{
    if (fi == str.length())
    {
        res.push_back(vecstr);
        return;
    }

    // 以当前起点为开端，寻找一个回文子串...加入vecstr中
    for (int len = 1; fi + len <= str.length(); ++len)
    {
        if (isPaladrom(str, fi, len))
        {
            vecstr.push_back(str.substr(fi, len));
            backTrack(res, str, fi + len, vecstr);
            vecstr.pop_back();
        }
    }
}

vector<vector<string>> partition(string string1)
{
    vector<vector<string>> res;
    int fi = 0;
    vector<string> vecstr = {};
    backTrack(res, string1, fi, vecstr);

    return res;
}

int main()
{
    string string1 = "aab";

    vector<vector<string>> res = partition(string1);


    return 0;
}