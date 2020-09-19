//
// Created by wbzhang on 2020/3/1.
//

#include "commonHeaders.h"

// 两数之和
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    if(nums.size()<2) return result;
    // 哈希表法
    unordered_map<int,int> hasp;
    for(int i=0;i<nums.size();i++){
        int res = target - nums[i];
        if( hasp.find(res)!=hasp.end() ){
            result.push_back(hasp.find(res)->second);
            result.push_back(i);
            return result;
        }
        hasp.insert(pair<int,int>(nums[i],i));
    }
    return result;
}