//
// Created by wbzhang on 2020/2/28.
//

#include "commonHeaders.h"

vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> result;
    if(nums.size()<1) return result;
    // 建一个hashmap，如果元素未出现，则插入，并将其值+1；否则直接将其值+1
    //将Hashmap由大到小排序，返回hashmap前k个元素
    map<int,int> hist; //map是有序的
    for(int i=0;i<nums.size();i++){
        auto posi = hist.find(nums[i]);
        if( posi ==hist.end() ){
            hist.insert(pair<int,int>(nums[i],1));
        }else posi->second++;
    }

    // 排序并返回结果
    sort(hist.begin(),hist.end());
    for (int j = 0; j < k; ++j) {
        result.push_back(hist[j]);
    }
    return result;
}

// 大神的lamda表达式解法
vector<int> topKFrequent1(vector<int>& nums, int k) {
    map<int,int>m;
    for(auto num : nums)    //  存到哈希结构里
        m[num]++;
    vector<pair<int,int >>v;
    vector<int>ans;
    for(auto it : m)        //  存到用于对value排序的容器里
        v.push_back(make_pair(it.first,it.second));
    sort(v.begin(),v.end(),[](pair<int,int> &a,pair<int,int> &b)->bool{return a.second>b.second;}  );
    //  对容器中的pair按照出现次数从大到小排序
    /*
        C++ 的lambda表达式和java的略有区别
    */
    for(int i=0;k;++i,--k)
        ans.push_back(v[i].first);

    return ans;
}