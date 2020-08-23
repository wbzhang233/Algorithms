//
// Created by wbzhang on 2020/3/15.
//
#include "../commonHeaders.h"

bool isIsomorphic(string s, string t) {
    unordered_map<char,char> charMap1;
    unordered_map<char,char> charMap2;

    for(int i=0;i<s.size();i++){
        if(charMap1.count(s[i])<=0 && charMap2.count(t[i])<=0){
            charMap1.insert(make_pair(s[i],t[i]) );
            charMap2.insert(make_pair(t[i],s[i]) );
        }else if( t[i]!=charMap1[s[i]] ) return false;
    }
    return true;
}