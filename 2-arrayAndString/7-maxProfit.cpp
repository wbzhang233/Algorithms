//
// Created by wbzhang on 2020/2/29.
//

#include "commonHeaders.h"

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    if(prices.size()<1) return maxProfit;
    for(int i=0,j=i+1;i<prices.size()-1;i++,j++){
        if(prices[j]-prices[i]>0){
            maxProfit+=prices[j]-prices[i];
        }
    }
    return maxProfit;
}