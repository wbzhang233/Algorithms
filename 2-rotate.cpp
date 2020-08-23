//
// Created by wbzhang on 2020/2/28.
//
#include "commonHeaders.h"

void rotate(vector<int>& nums, int k) {
    if(k<1) return;
    for(int i=1;i<=k;i++){
        int temp = nums.back();
        nums.pop_back();
        nums.insert(nums.begin(),1,temp);
    }
}

void rotate1(vector<int>& nums, int k) {
    if(k<1) return;
    while(k>0){
        int temp = nums.front();
        nums.push_back(temp);
        nums.erase(nums.begin());
        k--;
    }
}
