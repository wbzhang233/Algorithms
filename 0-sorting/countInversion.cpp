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


class Solution2 {
public:

	void merge(int &res,vector<int> &nums,int l,int mid,int h){
		vector<int> helper;
		int li=l,ri=mid+1;
		while(li<=mid || ri<=h){
			if(li<=mid && ( ri>h || nums[li]<nums[ri]) ){
				helper.push_back(nums[li++]);
			}else{
				res+= 1;
				helper.push_back(nums[ri++]);
			}
		}

		for(int low = l,i=0;low<=h;++low){
			nums[low] = helper[i++];
		}

	}

	void mergeSortR(int &res,vector<int> &nums,int l,int h)
	{
		if(l>=h) return;
		int mid = l+(h-l)/2;
		mergeSortR(res,nums,l,mid);
		mergeSortR(res,nums,mid+1,h);
		merge(res,nums,l,mid,h);

	}

	int reversePairs(vector<int>& nums) {
		int res = 0;
		mergeSortR(res,nums,0,nums.size()-1);
		for(auto ele:nums){
			cout<<ele<<",";
		}
		return res;
	}
};


int main()
{
    Solution2 s;
//    vector<int> input;
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int number;
//        cin >> number;
//        input.push_back(number);

    vector<int> input = {6,3,4,7,1};
    int count=s.reversePairs(input);
    cout <<endl<< "res: "<<count << endl;
    return 0;
}

//5
//6 3 4 7 1