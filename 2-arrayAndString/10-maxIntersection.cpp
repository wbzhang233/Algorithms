//
// Created by wbzhang on 2020/3/4.
//
#include "commonHeaders.h"


vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    // 1-构建两个直方图哈希表，
    // 针对nums1中的每一个元素，直接在nums2中进行查找，如果找到则返回该数即其个数
    map<int,int> hist1 = getHistgrom(nums1);
    map<int,int> hist2 = getHistgrom(nums2);

    map<int,int>::iterator iter = hist1.begin();
    for(;iter!=hist1.end();iter++){
        auto findIter = hist2.find( iter->first );
        if( findIter != hist2.end() ){
            int count = (iter->second<=findIter->second) ? iter->second : findIter->second;
            for(int i=0;i< count ;i++){
                result.push_back( iter->first );
            }
        }
    }

    return result;
}

// 统计数组直方图
map<int,int> getHistgrom(vector<int> nums){
    map<int,int> hash;
    for(auto ele:nums){
        hash[ele]++;
    }
    return hash;
}