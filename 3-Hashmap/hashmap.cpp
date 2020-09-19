//
// Created by wbzhang on 2020/3/13.
//


#include "../common/commonHeaders.h"
#include <unordered_map>
#include <unordered_set>

int strStr(string haystack, string needle) {
    if(needle.size()==0) return 0;
    int length=needle.size();
    for(int i=0;i<=haystack.size()-length;i++){
        string subs = haystack.substr(i,length) ;
        if( subs ==needle ) return i;
    }
    return -1;
}

string longestCommonPrefix(vector<string>& strs) {
    string res;
    if(strs.size()==0) return res;

    // 求字符串中最短串的长度
    int minSize=strs[0].size();
    for(int i=1;i<strs.size();i++){
        minSize = strs[i].size()<minSize ?strs[i].size():minSize;
    }

    for(int i=0;i<minSize;i++){
        char temp = strs[0][i];
        for(int kk=1;kk<strs.size();kk++){
            if(strs[kk][i]!=temp) return res;
        }
        res.push_back(temp);
    }
    return res;
}


int main(){

    vector<string> src={"a"};
    cout<<longestCommonPrefix(src)<<endl;

//    // set
//    unordered_set<int> hashset;
//    hashset.insert(1);
//    hashset.insert(1);
//    hashset.insert(1);
//    hashset.find(1);
//    cout<<"count1:"<<hashset.count(1)<<endl;
//
//    // map
//    unordered_map<int,int> hashmap;
//    hashmap.insert(make_pair(1,3));
//    hashmap.insert(make_pair(2,7));

//    unordered_map<char,char> charMap1;
//    charMap1.insert(make_pair('a','q'));
//    charMap1['a']='d';
//
//    for(auto &ele:charMap1){
//        if(ele.first=='a') ele.second='f';
//    }

//    for(auto ele:charMap1){
//        if(ele.first=='a') charMap1[ele.first]='f';
//    }

//    unordered_map<int, int> hashmap;
//    // 2. insert a new (key, value) pair
//    hashmap.insert(make_pair(0, 0));
//    hashmap.insert(make_pair(2, 3));
//    // 3. insert a new (key, value) pair or update the value of existed key
//    hashmap[1] = 1;
//    hashmap[1] = 2;
//
//    cout<< isIsomorphic("ab","aa")<<endl;

//    cout<<"count2:"<<hashmap.count(2)<<endl;




    return 0;
}