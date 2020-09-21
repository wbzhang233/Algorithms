// 高频面试题：盛水最多的容器
// wbzhang233 0920

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// 双指针
int maxArea(vector<int> &nums)
{
    int n = nums.size();
    int p = 0, q = n - 1;
    // int minV = min(nums[p],nums[q]);
    // int res = (q-p)*minV;
    int minV;
    int res = INT_MIN;

    while (p < q)
    {
        int minV = min(nums[p], nums[q]);
        res = max(res, (q - p) * minV);
        if (nums[p] < nums[q])
        {
            p++;
        }
        else
        {
            q--;
        }
    }

    return res;
}

int main()
{
    vector<int> nums = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "ans: " << maxArea(nums) << endl;
    return 0;
}