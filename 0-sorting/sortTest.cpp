// 字符串排序
// https://www.nowcoder.com/question/next?pid=21910835&qid=894528&tid=35770036

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include "sortCommon.h"
#include "mergeSortString.h"

using namespace std;

int main() {
	cout << "hello world" << endl;

	vector<int> nums = {2, 3, 1, 6, 3, 8, 9, 7, 14, 4, 18};
	int len = nums.size();
	mergeSort(nums, 0, len - 1); //归并排序
//	heapsort(nums); //堆排序

//	int nums[] = {2, 3, 1, 6, 3, 8, 9, 7, 14, 4, 18};
//	int len = sizeof(nums)/ sizeof(*nums);
//	mergeSort(nums,len); // 归并排序

	for (int i = 0; i < len; ++i) {
		cout << nums[i] << " ";
	}

/*	mergeSort1 mgSort1;
//    vector<int> nums2 = mgSort.mergeSort<int>(nums,0,nums.size()-1);
    vector<int> nums2;
    mgSort1.mergeSort<int>(nums,0,nums.size()-1,nums2);*/

//	mergeSort2 mgSort2;
//	mgSort2.MergeSort(nums, 0, nums.size());

//	for (auto ele:nums)
//		cout << ele << " ";

	return 0;
}