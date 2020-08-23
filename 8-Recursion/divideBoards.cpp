//
// Created by wbzhang on 2020/7/25.
//

#include "../commonHeaders.h"

vector<int> divingBoard(int shorter, int longer, int k) ;

void countBoard(vector<int>& res,int shorter,int longer,int k){
    if(k==0) return;
    vector<int> sts = divingBoard(shorter,longer,k-1);
    for(auto ele:sts){
        res.push_back(ele+shorter);
        res.push_back(ele+longer);
    }
}

vector<int> divingBoard(int shorter, int longer, int k) {
    vector<int> res;
    countBoard( res,shorter,longer,k);
    return res;
}

int main(){
    int shorter =1;
    int longer =2;
    int k =4;

    vector<int> res = divingBoard(shorter,longer,k);

    return 0;
}