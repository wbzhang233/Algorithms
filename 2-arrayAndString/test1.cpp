//
// Created by wbzhang on 2020/3/26.
//


#include <iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int input;
    cin>>input;

    char carray[9]={NULL};
    cin.get(carray,9);

    int array[9];
    for(int i=0;i<9;i++){
        array[i] = carray[i]-'0';
    }

    stack<int> renums;
    // 进行替换,从各位开始，逐渐往上
    while(input>10){
        renums.push(array[input%10-1]);
    }
    renums.push(input%10);    // 个位先入栈


    //做一个逆序
    vector<int> result;
    while(!renums.empty()){
        result.push_back(renums.top());
        renums.pop();
    }

    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }


    return 0;
}