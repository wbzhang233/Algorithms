//
// Created by wbzhang on 2020/2/28.
//

#include "commonHeaders.h"

// 暴力法1
// 双指针
int removeDuplicates(vector<int>& nums) {
    if(nums.size()<2) return nums.size();
    for(vector<int>::iterator iter=nums.begin();iter!=nums.end()-2;++iter){
        auto iter2=iter+1;
        if (*iter==*(iter2)){
            //cout<<"before:"<<*iter2<<endl;
            nums.erase(iter2);
            //cout<<"after:"<<*iter2<<endl;
            iter--;// 删除后自动指向下一位，给复位
        }
    }

    return nums.size();
}

// 未完成，迭代器失效
int removeDuplicates11(vector<int>& nums) {
    if(nums.size()<2) return nums.size();
    for(auto iter=nums.begin();iter!=nums.end()-1;++iter){
        //auto iter2=nums.end();
        auto iter2 = nums.begin()+nums.size()-1;
        while(iter2>iter){
            if (*iter==*(iter2)){
                nums.erase(iter2);//可能出现野指针？比如擦除了最后一项，iter2会变成野指针？
                //iter2--;
            }
            iter2--;
        }
    }
    return nums.size();
}

// 暴力法2
int removeDuplicates1(vector<int>& nums) {
    if(nums.size()<2) return nums.size();
    cout<<*(nums.begin()+nums.size()-1)<<endl;
    for(int i=0;i<nums.size()-1;++i){
        //int j = nums.size()-1;
        int j=i+1;
//        while(j<nums.size()){
        if (nums[i]==nums[j]){
            nums.erase(nums.begin()+j);
            i--;
        }
//            j++;
//        }
    }
    return nums.size();
}

// 双指针法
int removeDuplicates2(vector<int>& nums){
    int p=0,q=1;
    while(q!=nums.size()-1){
        if(nums[p]==nums[q]){
            q++;
        }else{
            nums[p+1]=nums[q];
            p++;
            q++;
        }
    }
    return p+1;
}
