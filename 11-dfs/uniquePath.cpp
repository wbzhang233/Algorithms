//
// Created by wbzhang on 2020/8/5.
//

#include "../common/common.h"

class Solution {
public:
    int M,N;
    void dfs(int i,int j,int &res,vector<vector<bool> > &visited){
        // 边界条件
        if(i==M-1 && j==N-1){
            res++;
            return;
        }
        visited[i][j] = true;
        // 四周扩展
        if(i+1<M && j<N && !visited[i+1][j]) dfs(i+1,j,res,visited);
        if(j+1<N && i<M && !visited[i][j+1]) dfs(i,j-1,res,visited);
    }

    void dfs(int i,int j,int &res){
        // 边界条件
        if(i==M-1 && j==N-1){
            res++;
            return;
        }
        // 四周扩展
        if(i+1<M && j<N) dfs(i+1,j,res);
        if(j+1<N && i<M) dfs(i,j-1,res);
    }

    int uniquePaths(int m, int n) {
        int res = 0;
        this->M = m;
        this->N = n;
        int i = 0,j = 0;
        vector<vector<bool> > visited(M,vector<bool>(N,false));
        dfs(i,j,res);
        return res;
    }
};

int main(){
    int m=3,n=2;
    Solution sl;
    int ans = sl.uniquePaths(3,2);
    cout<<"ans:"<<ans<<endl;

    return 0;
}