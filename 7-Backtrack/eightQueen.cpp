//
// Created by wbzhang on 2020/9/2.
//

#include "../common/common.h"

typedef pair<int, int> Coor;

class Solution {
public:
	vector<vector<string> > res;
	int N;

	const vector<vector<int> > dires = {{1,  1},
										{1,  -1},
										{-1, -1},
										{-1, 1}};

	// 判断当前位置是否有效
	bool isValidPlace(vector<string> &strs, int row, int col) {
		// 同一行
		for (int j = 0; j < N; j++) {
			if (strs[row][j] == 'Q') return false;
		}
		// 同一列
		for (int i = 0; i < N; i++) {
			if (strs[i][col] == 'Q') return false;
		}

		// 对角线
		for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
			if (strs[i][j] == 'Q') return false;
		} // 左上
		for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++) {
			if (strs[i][j] == 'Q') return false;
		} // 右上

//		for(int i=0;i<dires.size();i++){
//			int r = row,c = col;
//			while(r>=0 && c>=0 && r<N && c<N){
//				if(strs[r][c]=='Q') return false;
//				r+=dires[i][0];
//				c+=dires[i][1];
//			}
//		}

		return true;
	}

	// 当前路径：当前字符串,当前位置,当前摆放数
	void backTrack(vector<string> &strs, int row) {
		// 处理当前状态
		if (row == N) {
			res.push_back(strs);
			return;
		}

		// 做选择
		for (int col = 0; col < N; col++) {
			if (isValidPlace(strs, row, col)) {
				strs[row][col] = 'Q';
				backTrack(strs, row + 1); // 做选择
				strs[row][col] = '.'; //撤销选择
			}
		}

	}

	vector<vector<string>> solveNQueens(int n) {
		this->N = n; //皇后的个数

		// 当前摆放状态
		vector<string> strs(n, string(n, '.'));
		int row = 0;
		backTrack(strs, row);
		return res;
	}


};

int main() {
	int n = 8;
	Solution solu;
	vector<vector<string> > res = solu.solveNQueens(n);

	for (auto ves:res) {
		for (auto str:ves) {
			cout << str << "\t";
		}
		cout << endl;
	}
	return 0;
}

class Solution2 {
public:
	vector<vector<string> > res;
	int N;


	/* 是否可以在 board[row][col] 放置皇后？ */
	bool isValid(vector<string> &board, int row, int col) {
		int n = board.size();
		// 检查列是否有皇后互相冲突
		for (int i = 0; i < n; i++) {
			if (board[i][col] == 'Q')
				return false;
		}
		// 检查右上方是否有皇后互相冲突
		for (int i = row - 1, j = col + 1;
			 i >= 0 && j < n; i--, j++) {
			if (board[i][j] == 'Q')
				return false;
		}
		// 检查左上方是否有皇后互相冲突
		for (int i = row - 1, j = col - 1;
			 i >= 0 && j >= 0; i--, j--) {
			if (board[i][j] == 'Q')
				return false;
		}
		return true;
	}


/* 输入棋盘边长 n，返回所有合法的放置 */
	vector<vector<string>> solveNQueens2(int n) {
		// '.' 表示空，'Q' 表示皇后，初始化空棋盘。
		vector<string> board(n, string(n, '.'));
		backtrack2(board, 0);
		return res;
	}

// 路径：board 中小于 row 的那些行都已经成功放置了皇后
// 选择列表：第 row 行的所有列都是放置皇后的选择
// 结束条件：row 超过 board 的最后一行
	void backtrack2(vector<string> &board, int row) {
		// 触发结束条件
		if (row == board.size()) {
			res.push_back(board);
			return;
		}

		int n = board[row].size();
		for (int col = 0; col < n; col++) {
			// 排除不合法选择
			if (!isValid(board, row, col))
				continue;
			// 做选择
			board[row][col] = 'Q';
			// 进入下一行决策
			backtrack2(board, row + 1);
			// 撤销选择
			board[row][col] = '.';
		}
	}

};