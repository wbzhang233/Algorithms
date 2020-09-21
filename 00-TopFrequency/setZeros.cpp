// 面试高频题：矩阵置零
// wbzhang
// leetcode No.73

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    bool flag = false;      //用作第一列的标识位
    int m = matrix.size(), n = matrix[0].size();
    for(int i = 0; i < m; ++i)       //设置标识位
    {
        if(matrix [i][0] == 0)  flag = true;    //单独判断第一列的情况
        for(int j = 1; j < n; ++j)
        {
            if(matrix[i][j] == 0)    matrix[i][0] = matrix[0][j] = 0;
        }     
    }
    for(int i = m-1; i >= 0; --i)       //更新数值时，因为标识位都在左上角，所以自下而上更新0值
    {
        for(int j = n-1; j >= 1; --j)
        {
          if(matrix[i][0] == 0 || matrix [0][j] == 0)
            matrix[i][j] = 0;
        }     
        if(flag)    matrix[i][0] = 0;   //第一列元素单独判断
    }

    }
};


class Solution2
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<vector<int> > pos;
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                    pos.push_back({i, j});
            }
        }

        for (auto ele:pos)
        {
            for (int i =0; i < n; i++)
            {
                matrix[ele[0] ][i] = 0;
            }
            for (int i =0; i < n; i++)
            {
                matrix[i][ele[1]] = 0;
            }
        }
    }
};

int main()
{
    // vector<vector<int> > nums = { {0,1,1},
    //                               {1,0,1},
    //                               {1,0,1}};

    // vector<vector<int> > nums = {{1},{0}};

    vector<vector<int> > nums = {{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};

    Solution solu;
    solu.setZeroes(nums);
    for(auto vec:nums){
        for(auto ele:vec){
            cout<<ele<<" ";
        }
        cout<<endl;
    }

    return 0;
}