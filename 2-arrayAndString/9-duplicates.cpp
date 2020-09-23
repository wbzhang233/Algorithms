//
// Created by wbzhang on 2020/3/4.
//

#include "../common/commonHeaders.h"

bool containsDuplicate(vector<int>& nums) {
    if(nums.size()<2) return false;
    // 建立一个哈希表，key为序号，value为值
    map<int,int> hash;
    for(int i=0;i<nums.size();i++){
        if( hash.find(nums[i])!=hash.end() ){
            // 找到了，则存在重复
            return true;
        }else {
            // 没找到，插入
            //hash[i++]=ele;
            //hash.insert(pair<int,int>(i,nums[i]));
            hash.insert(pair<int,int>(nums[i],i));
        }
    }
    return false;
}