//
// Created by wbzhang on 2020/8/6.
//
#include "../common/common.h"

// 回溯+剪枝方法
class Solution {
public:
    vector<string> res; //保存结果
    int length;

    // 当前路径，当前
    void backTrack(string &cur,vector<bool> &path,string s){
        // 截止条件
        if(cur.size()==s.size()){
            res.push_back(cur);
            return;
        }
        // 选择列表
        for(int i=0;i<length;++i){
            if(path[i] ) continue; //已使用,或该轮中此种选择已经做过
            // 剪枝
            if(i > 0 && !path[i-1] && s[i-1] == s[i]) continue;

            // 做选择
            cur.push_back(s[i]);
            path[i] = true;

            backTrack(cur,path,s);
            // 回溯
            cur.pop_back();
            path[i] = false;
        }
    }

    vector<string> permutation(string s) {
        // 特别判断
        if(!s.size()) return {};
        this->length = s.size();
        // 排序
        sort(s.begin(),s.end());
        // 回溯法
        string cur ="";
        // int cur_pose = 0;
        vector<bool> path(s.length(),false); // 当前使用过的元素
        backTrack(cur,path,s);

        return res;
    }


};

// 仅排列不同字符的解
class Solution2 {
public:
    set<string> res; //保存结果
    int length;

    // 当前路径，当前
    void backTrack(string &cur,vector<bool> &path,string s){
        // 截止条件
        if(cur.size()==s.size()){
            res.insert(cur);
            return;
        }
        // 选择列表
        for(int i=0;i<length;++i){
            if(path[i]) continue; //已使用
            // 做选择
            cur.push_back(s[i]);
            path[i] = true;
            backTrack(cur,path,s);
            // 回溯
            cur.pop_back();
            path[i] = false;
        }
    }

    vector<string> permutation(string s) {
        // 特别判断
        if(!s.size()) return {};
        // 否则，统计s中不同的字母
        int diffChars[256]={0};
        string diffS="";
        for(auto ele:s){
            if(diffChars[ele]==0){
                diffChars[ele]=1;
                diffS.push_back(ele);
            }
        }

        this->length = diffS.size();
        // 回溯法
        string cur ="";
        // int cur_pose = 0;
        vector<bool> path(diffS.length(),false); // 当前使用过的元素
        backTrack(cur,path,diffS);

        vector<string> ans(this->res.begin(),this->res.end());
        return ans;
    }


};

// 暴力使用set容器去重的方法，缺点在于不如剪枝后的复杂度好
class Solution3 {
public:
    set<string> res; //保存结果
    int length;

    // 当前路径，当前
    void backTrack(string &cur,vector<bool> &path,string s){
        // 截止条件
        if(cur.size()==s.size()){
            res.insert(cur);
            return;
        }
        // 选择列表
        for(int i=0;i<length;++i){
            if(path[i]) continue; //已使用
            // 做选择
            cur.push_back(s[i]);
            path[i] = true;
            backTrack(cur,path,s);
            // 回溯
            cur.pop_back();
            path[i] = false;
        }
    }

    vector<string> permutation(string s) {
        // 特别判断
        if(!s.size()) return {};
        this->length = s.size();
        // 回溯法
        string cur ="";
        // int cur_pose = 0;
        vector<bool> path(s.length(),false); // 当前使用过的元素
        backTrack(cur,path,s);

        vector<string> ans(this->res.begin(),this->res.end());
        return ans;
    }


};

int main(){
    string s="aab";
    Solution solu;
    vector<string> res = solu.permutation(s);

    for(auto ele:res){
        cout<<ele<<"\t"<<endl;
    }

    return 0;
}