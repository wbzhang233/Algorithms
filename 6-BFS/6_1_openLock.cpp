//
// Created by wbzhang on 2020/7/14.
//
#include "../commonHeaders.h"


int openLock(vector<string>& deadends, string target) {
    // 1-选择数据结构
    // 记录访问过、死锁
    unordered_set<string> visited,deads;
    for(auto ele:deadends) deads.insert(ele);

    // 构建队列，用于搜索,记录步数,初始状态
    int depth = 0;
    queue<string> queue;
    string init_state = "0000";
    queue.push(init_state);

    // 2-BFS模板
    while(!queue.empty()){
        // 2-1 本来为取出最前面的数，但此处用于计算步骤应当取出所有的数,扩展作为一步
        int curr_size = queue.size();
        while(curr_size>0){
            string curr = queue.front();
            queue.pop(); //弹出
            // 2-2 当前状态判断
            // 判断是否到达目标？
            if(curr==target) {
                cout<<curr<<endl;
                return depth; //抵达目标
            }
            //已经访问过或者遇到死锁，则跳过
            if(visited.find(curr)!=visited.end() || deads.find(curr)!=deads.end()) continue;
            else visited.insert(curr);

            // 2-3 进行延展
            for(int i=0;i<4;++i){
                string minusOne(curr);
                string addOne(curr);
                minusOne[i] = (minusOne[i]-'0'+9)%10+'0'; // 0-1 -->9
                addOne[i] = (addOne[i]-'0'+1)%10+'0'; // 9+1 -->0
                // 没在否决列表里则加入队列
                if(visited.find(minusOne)==visited.end() && deads.find(minusOne)==deads.end())
                    queue.push(minusOne);
                if(visited.find(addOne)==visited.end() && deads.find(addOne)==deads.end())
                    queue.push(addOne);
            }
            curr_size--;
        }

        depth++;
    }

    return -1; //未能搜索到
}



int main(){
    vector<string> deadends={"0201","0101","0102","1212","2002"};
    string target = "0202";

    int res = openLock(deadends,target);
    cout<<"res:"<<res<<endl;

    return 0;
}