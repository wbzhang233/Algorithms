//
// Created by wbzhang on 2020/8/5.
//

#include "../common/common.h"

// 剑指offer 矩阵中的路径
class Solution {
public:
    int rows,cols,length;
    bool res;

    const vector<vector<int> > dicts = {{-1,0},{1,0},{0,1},{0,-1}};
    void backTrack(vector<vector<char>> board,int i,int j,int &curr_pose,
                   vector<vector<bool>> &visited,string word){
        // 截止条件
        if(curr_pose==length){
            this->res = true; return;
        }
        // 标记
        visited[i][j];
        // 选择列表
        for(auto dict:dicts){
            int updateX = i + dict[0];
            int updateY = j + dict[1];
            // 该选择可做，则做，并且回溯
            if(updateX>=0 && updateX<rows && updateY>=0 && updateY<cols){
                curr_pose++;
                if(!visited[updateX][updateY] && board[updateX][updateY]==word[curr_pose])
                    backTrack(board,updateX,updateY,curr_pose,visited,word);
                // 回溯
                curr_pose--;
                visited[updateX][updateY]=false;
            }
        }
    }

    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size(); this->rows = r;
        int c = board[0].size();this->cols = c;
        int length = word.size(); this->length = length;
        this->res = false;

        vector<vector<bool>> visited(r,vector<bool>(c,false));

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]==word[0]){
                    int curr_pose = 0;
                    backTrack(board,i,j,curr_pose,visited,word);
                }
                if(this->res) return true;
            }
        }
        return false;
    }
};
