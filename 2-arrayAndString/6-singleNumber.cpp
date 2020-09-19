//
// Created by wbzhang on 2020/2/28.
//

#include "commonHeaders.h"

int singleNumber(vector<int>& nums) {
    // 异或方法
    int result=0;
    for(auto ele:nums){
        result = result ^ele;
    }
    return result;
}

