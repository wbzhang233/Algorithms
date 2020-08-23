//
// Created by wbzhang on 2020/7/24.
//

#include "../commonHeaders.h"

vector<vector<int>> res;
vector<int> setToVec(unordered_set<int> set){
    vector<int> vec;
    for(auto iter=set.begin();iter!=set.end();++iter){
        vec.push_back(*iter);
    }
    return vec;
}

// 当前属性
void backTrack(unordered_set<int> curr_set,unordered_set<int> option_set,int k){
    if(curr_set.size()==k){
        res.push_back(setToVec(curr_set) );
        return;
    }

    // 选择列表
    for(auto iter=option_set.begin();iter!=option_set.end();++iter){
        int ele = *iter;
        // 跳过无效选择
        // if(curr_set.count(i)!=0 ) continue;
        // 做出选择
        curr_set.insert(ele);
        option_set.erase(ele);
        // 回溯
        backTrack(curr_set,option_set,k);
        //移除选择
        curr_set.erase(ele);
        option_set.insert(ele);
    }
    return;
}

vector<vector<int>> combine(int n, int k) {
    // 初始选择
    unordered_set<int> curr_set;
    unordered_set<int> option_set;
    for(int i=1;i<n+1;i++) option_set.insert(i);

    backTrack(curr_set,option_set,k);
    return res;
}

int main(){
    int n = 6,k=3;
    vector<vector<int> > res = combine(n,k);

    cout<<"done"<<endl;
    return 0;
}
