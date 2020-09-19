//
// Created by wbzhang on 2020/2/28.
//
#include "commonHeaders.h"


void reverseString(vector<char>& s) {
    if(s.size()<1) return;
    reverse(s.begin(),s.end());
}

void reverseString1(vector<char>& s) {
    if(s.size()<1) return;

    auto iter = s.begin();
    //auto iter2 = s.end();//错误，需要-1
    auto iter2 = s.begin()+s.size()-1;
    while(iter<=iter2){
        auto temp=*iter;
        *iter=*iter2;
        *iter2=temp;

        iter++;
        iter2--;
    }
}

void reverseString2(vector<char>& s) {
    int p=0;
    int q=s.size()-1;
    while(p<=q){
        char temp = s[p];
        s[p]=s[q];
        s[q]=temp;

        p++;
        q--;
    }
}