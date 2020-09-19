//
// Created by wbzhang on 2020/9/6.
//
#include "../common/common.h"

class Solution {
private:
	vector<int> size;
	vector<int> parent;
	int count;
public:
	// 并查集合，初始化大小
	void unionCreate(int n)
	{
		this->count = n;
		parent.assign(n,0);
		size.assign(n,0);
		for(int i=0;i<n;i++){
			parent[i] = i;
			size[i] = 1;
		}
	}

	// 路径压缩
	int find(int p){
		while(parent[p]!=p){
			parent[p] = parent[parent[p] ];
			p = parent[p];
		}
		return p;
	}

	// 合并两个并查集
	void unionTwo(int p,int q){
		int pRoot = find(p);
		int qRoot = find(q);
		if(pRoot==qRoot) return; //同一个集合，不用合并

		if(size[pRoot]>size[qRoot]){
			parent[qRoot] = pRoot;
			size[pRoot] += size[qRoot];
		}else{
			parent[pRoot] = qRoot;
			size[qRoot] += size[pRoot];
		}
		count--;
	}


	// 是否属于同一个集合
	bool isConnected(int p,int q){
		int pRoot = find(p);
		int qRoot = find(q);
		return pRoot==qRoot;
	}


	int findCircleNum(vector<vector<int>>& M) {
		int n = M.size();
		unionCreate(n);

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(M[i][j]==1) unionTwo(i,j);
			}
		}

		return this->count;
	}
};


int main()
{
	vector<vector<int> > M = {{1,1,0},
							  {1,1,1},
							  {0,1,1}};

	Solution solu;
	cout<<solu.findCircleNum(M);

	return 0;
}