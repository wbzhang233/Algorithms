//
// Created by wbzhang on 2020/7/31.
//

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int InversePairs(vector<int> data) {
        int length = data.size();
        if (length <= 0)
            return 0;
        //vector<int> copy=new vector<int>[length];
        vector<int> copy;
        for (int i = 0; i<length; i++)
            copy.push_back(data[i]);
        long long count = InversePairsCore(data, copy, 0, length - 1);
        //delete[]copy;
        return count % 1000000007;
    }
    long long InversePairsCore(vector<int> &data, vector<int> &copy, int start, int end)
    {
        if (start == end)
        {
            copy[start] = data[start];
            return 0;
        }
        // 划分，分而治之
        int length = (end - start) / 2;
        long long left = InversePairsCore(copy, data, start, start + length);
        long long right = InversePairsCore(copy, data, start + length + 1, end);

        //
        int i = start + length;
        int j = end;
        int indexcopy = end;
        long long count = 0;
        while (i >= start&&j >= start + length + 1)
        {
            if (data[i]>data[j])
            {
                copy[indexcopy--] = data[i--];
                count = count + j - start - length;          //count=count+j-(start+length+1)+1;
            }
            else
            {
                copy[indexcopy--] = data[j--];
            }
        }
        for (; i >= start; i--)
            copy[indexcopy--] = data[i];
        for (; j >= start + length + 1; j--)
            copy[indexcopy--] = data[j];
        return left + right + count;
    }
};


int main()
{
    Solution s;
    vector<int> input;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        input.push_back(number);
    }
    int count=s.InversePairs(input);
    cout << count << endl;
    return 0;
}