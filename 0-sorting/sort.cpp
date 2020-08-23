//
// Created by wbzhang on 2020/3/15.
//

#include "sortCommon.h"

int main(){
//    vector<int> nums={ 1, 34, 3, 32, 60, 55,36, 50, 37, 5, 64, 35, 9, 59 };
//    int arr[] = { 1, 34, 3, 32, 60, 55,36, 50, 37, 5, 64, 35, 9, 59 };
//    int len =sizeof(arr)/ sizeof(arr[0]);
//    cout<<len<<endl;
//    coutNums(nums);
//
////    shell_sort(arr,len);
////    coutNums(arr,len);
////    nums = countingSort(nums);
//    bubbleSort(nums);
//    coutNums(nums);

    // 快排
//    QuickSort(nums,0,nums.size());
//    coutNums(nums);

    /// 计算逆序对的个数
    int n=11;
    vector<int> nums(n);
    for(int i=0;i<n;i++) nums[i]=n-i;
        coutNums(nums);
    int invCount = countInversion(nums);
        coutNums(nums);
    cout<<invCount<<endl;

    return 0;
}
