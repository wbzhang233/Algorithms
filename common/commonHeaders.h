//
// Created by wbzhang on 2020/2/27.
//

#ifndef ALGORITHMS_COMMONHEADERS_H
#define ALGORITHMS_COMMONHEADERS_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <queue>

using namespace std;

// 1-去重复数字
int removeDuplicates(vector<int>& nums);
int removeDuplicates11(vector<int>& nums);
int removeDuplicates1(vector<int>& nums);
int removeDuplicates2(vector<int>& nums);

// 2-旋转数组
void rotate(vector<int>& nums, int k);
void rotate1(vector<int>& nums, int k);

// 3-反转字符串
void reverseString(vector<char>& s);
void reverseString1(vector<char>& s);
void reverseString2(vector<char>& s);

// 5-K个最高频数字
//vector<int> topKFrequent(vector<int>& nums, int k);
vector<int> topKFrequent1(vector<int>& nums, int k);

// 6-唯一数字
int singleNumber(vector<int>& nums);

// 7-最大利润
int maxProfit(vector<int>& prices);

// 8-两数之和
vector<int> twoSum(vector<int>& nums, int target);

//9- 存在重复
bool containsDuplicate(vector<int>& nums);

// 10-两个数组的最大公共子集
vector<int> intersect(vector<int>& nums1, vector<int>& nums2);
map<int,int> getHistgrom(vector<int> nums);


// 11-螺旋数组
//vector<int> spiralOrder(vector<vector<int>>& matrix);


// 12-快乐数
bool isHappy(int n);
vector<int> splitNumber(int num);
bool isTenPower(int n);

// 13-同构字符串
bool isIsomorphic(string s, string t) ;

#endif //ALGORITHMS_COMMONHEADERS_H
