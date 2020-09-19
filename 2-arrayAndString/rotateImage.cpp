//
// Created by wbzhang on 2020/9/3.
//

#include "../common/common.h"

class Solution {
public:

	virtual void printMatrix(vector<vector<int>>& matrix){
		printf("zhangqi say I'm good");
	};

	void rotate(vector<vector<int>>& matrix) {
		// 取四个顶点
		int n = matrix.size();
		if(!n) return;

		// 如果n为偶数，4- 0,1,2,3;如果n为奇数，5 0,1,2,3,4
		for(int i=0;i<(n+1)/2;i++){
			for(int j=0;j<n/2;j++){
				// 0,0 - 0,n-1 - n-1,n-1 - n-1,0
//				int lt = matrix[i][j]; //leftTop
//				int rt = matrix[i][n-1-i];// rightTop
//				int rd = matrix[n-1-i][n-1-i];// rightDown
//				int ld = matrix[n-1-i][i];// leftDown

//				cout<<lt<<" "<<rt<<" "<<rd<<" "<<ld<<endl;

				int tmp = matrix[i][j];
				matrix[i][j] = matrix[n-1-i][i];
				matrix[n-1-i][i] = matrix[n-1-i][n-1-i];
				matrix[n-1-i][n-1-i] = matrix[i][n-1-i];
				matrix[i][n-1-i] = tmp;

//				cout<< matrix[i][j]<<" "<<rt<<" "<<rd<<" "<<ld<<endl;
			}
		}

	}
};

class printSolu : Solution{
public:
//	printSolu(void);
//	~printSolu();
	void printMatrix(vector<vector<int>>& matrix){
		for(auto row:matrix){
			for(auto ele:row){
				cout<<ele<<" ";
			}
			cout<<endl;
		}
	}

};

int main()
{
	vector<vector<int> > nums = {{1,2,3},{4,5,6,},{7,8,9}};

	Solution solu;
	solu.rotate(nums);

	printSolu prSolu;
//	solu.printMatrix(nums);
	prSolu.printMatrix(nums);

	return 0;
}
