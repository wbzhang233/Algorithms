//
// Created by wbzhang on 2020/7/8.
//
#include <iostream>

#include <string>
#include <list>
#include <vector>
#include <stack>

#include <array>

#include <queue>
#include <deque>

#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>

using namespace std;

int main(){

    list<int> fucklist = {1,2,4,6,7,5,3,8,5};
//    fucklist.assign(10,10);
    for(auto ele:fucklist){
        cout<<ele<<"\t";
    }
    fucklist.sort();
    cout<<endl;
    for(auto ele:fucklist){
        cout<<ele<<"\t";
    }

    return 0;
}