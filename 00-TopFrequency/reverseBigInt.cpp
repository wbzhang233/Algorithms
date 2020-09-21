// 高频面试题题7：整数反转
// wbzhang
//

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0;
        while (x != 0)
        {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
                return 0; // 将正数上溢
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
                return 0; // 将负数下溢
            rev = rev * 10 + pop;
        }
        return rev;
    }
};

int main()
{
    signed int x = -123;
    Solution solu;
    cout << solu.reverse(x) << endl;

    return 0;
}
