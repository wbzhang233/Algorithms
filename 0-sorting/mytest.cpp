// 字符串排序
// https://www.nowcoder.com/question/next?pid=21910835&qid=894528&tid=35770036

#include <iostream>
#include <vector>
#include <string>
#include <string.h> //strcmp所在函數
#include <algorithm>
#include <iomanip>

using namespace std;

template <typename T>
void merge(vector<T> partA, vector<T> partB,vector<T> &out)
{
    if(partA.size()==0 || partB.size()==0) return;

}

// 2-歸併排序
template <typename T>
vector<T> merge(vector<T> partA, vector<T> partB)
{
    vector<T> ans;
    int ind1 = 0, ind2 = 0;
    while (ind1 < partA.size() || ind2 < partB.size())
    {
        // A不为空，并且B为空或者A值小于B值时，压入A值
        if(ind1<partA.size() && (ind2==partB.size() || partA[ind1]<partB[ind2]) )
        {
            ans.push_back(partA[ind1++]);
        }else ans.push_back(partB[ind2++]);
    }

    return ans;
}

// 双闭区间
template <typename T>
vector<T> mergeSort(vector<T> &strs,int low,int high)
{
    if(low>=high)   return {};

    // 分治
    int pivot = low+ (high-low) >> 1;
    vector<T> left = mergeSort(strs, low, pivot);
    vector<T> right = mergeSort(strs, pivot + 1, high);

    // 合並
    return merge(left, right);
}

int main(){
    vector<int> nums ={2,3,1,6,3,8,9,7,14,4,18};

    vector<int> nums2 = mergeSort<int>(nums,0,nums.size()-1);
    for(auto ele:nums2) cout<<ele<<" ";

//    // 二路归并
//    vector<int> nums1={1,3,5,7,9};
//    vector<int> nums2={2,4,6,8,0};
//    vector<int> ans = merge<int>(nums1,nums2);
//    for(auto ele:ans) cout<<ele<<",";

    system("pause");
    return 0;
}