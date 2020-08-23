//
// Created by wbzhang on 2020/4/19.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <sec_api/string_s.h>

using namespace std;


int countCharacters(vector<string>& words, string chars) {
    if(chars.size()<1) return 0;

    int res  = 0;
    map<char,int> vob;
    for(auto ele:chars){
        vob[ele]++;
    }

    for(auto word:words){
        if(isGrasped(word,vob)){
            res+=word.size();
        }
    }

    return res;
}

bool isGrasped(string word,map<char,int> vob){
    for(auto ele:word){
        if(vob.find(ele)==vob.end()){
            return false;
        }else{
            vob[ele]--;
        }
    }

    return true;
}

int main(){
    string string1 = "ilovezhangqi";

    return 0;
}
