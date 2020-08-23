//
// Created by wbzhang on 2020/3/11.
//

#include "../commonHeaders.h"
#include "2-spiralOrder.h"

auto lambda = [](auto x, auto y) {return x + y;};


int main(){

//    vector<int> nums={1,6,9,8,14,12,3,8};
//    pair<int,int> a(1,2);

//    auto lambda = [](1.8,2.8);
    double x= 1.8;
    double y = 2.8;
//    std::cout<<lambda<<std::endl;
    auto data = lambda(x,y);

    vector<vector<int> > matrix= {
    {1, 2, 3},
    { 4,5,6},
    {7, 8,9}
    };

    vector<int> result = spiralOrder(matrix);

    for(auto ele:result){
        cout<<ele<<endl;
    }

    return 0;
}