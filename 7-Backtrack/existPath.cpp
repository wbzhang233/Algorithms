// 矩阵中的路径，剑指offer 12
// Created by wbzhang on 2020/8/17.
//

#include "../common/common.h"


class Solution {
public:
	int cols,rows;
	bool ans;
	const vector<vector<int>> stps={ {0,1},{0,-1},{1,0},{-1,0} };

	// 回溯法 当前状态，路径，选择
	bool backTrack(vector<vector<char>> board,vector<vector<bool>>& visited,int i,int j,string word,int &length){
		// 0.特别判定终止条件
		if(length==word.size() ){
			ans = true;
			return ans;
		}

		// 如果越界、不匹配或者已访问，则返回false
		if(i>=rows || i<0 || j>=cols || j<0 || board[i][j]!=word[length] || visited[i][j]) return false;

		// 2-做当下的选择
		visited[i][j] = true;
		length++;
		// 判断后续是否ok？
		for(auto stp:stps){
			ans = ans || backTrack(board,visited,i+stp[0],j+stp[1],word,length);
		}
		// 如果失败，则撤销选择
		if(!ans){
			length--;
			visited[i][j] = false;
		}
		return ans;
	}

	bool exist(vector<vector<char>>& board, string word) {
		// 0.特别判断
		if(!board.size() || !board[0].size()) return false;
		rows = board.size();
		cols = board[0].size();

		// 1.初始化当前状态和路径
		ans = false;
		int curr_lng=0;
		vector<vector<bool>> visited( rows,vector<bool>(cols,false));

		// 2.回溯
		for(int r=0;r<rows;r++){
			for(int c=0;c<cols;c++){
				// a.直接起点
				if(backTrack(board,visited,r,c,word,curr_lng)){
					return true;
				}
				// b.先判断，再入口
			}
		}
		return ans;
	}
};


class Solution2{
public:
	bool exist(vector<vector<char>>& board, string word) {
		bool m=false;
		for(int i=0;i<board.size();i++){
			for (int j = 0; j < board[i].size(); j++)
			{
				if (board[i][j] == word[0])  m=dfs(board,word,i, j,0)||m;
				if(m) return true;
			}
		}

		return m;
	}
	bool dfs(vector<vector<char>>& board,string&word ,int row,int col,int Pos)
	{
		if (row >= board.size() || row < 0 || col >= board[0].size() || col < 0 || board[row][col]!=word[Pos]) return false;
		if (Pos == word.size() - 1) return true;
		char tmp = board[row][col];
		board[row][col] = '#';
		bool m=false;
		m = dfs(board, word, row + 1, col, Pos + 1) || dfs(board, word, row - 1, col, Pos + 1) || dfs(board, word, row, col + 1, Pos + 1)||dfs(board, word, row, col - 1, Pos + 1);
		board[row][col] = tmp;
		return m;
	}

};


int main()
{

#if 1
	vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'} };
	string word = "ABCCED";
#endif

	Solution2 solu;
	bool ans = solu.exist(board,word);
	cout<<ans<<endl;
	return 0;
}