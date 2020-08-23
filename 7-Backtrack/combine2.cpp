//
// Created by wbzhang on 2020/8/20.
//
#include "../common/common.h"

class Solution {
public:
	vector<vector<int>> ans;

	// 路径，
	void backTrack(vector<int> &path,int &curr_sum,vector<int> candidates,int target)
	{
		// 终止条件
		if(curr_sum==target){
			ans.push_back(path);
			return;
		}

		if(curr_sum<target){
			// 只做比路径尾部更大的选择
			int lastEle = path.back();
			for(int i=lastEle;i<candidates.size();i++){
				path.push_back(i);
				curr_sum+=candidates[i];
				backTrack(path,curr_sum,candidates,target);
			}
		}
		// 撤销选择
		curr_sum -= candidates[ path.back()];
		path.pop_back();
	}


	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

		sort(candidates.begin(),candidates.end() );
		// 回溯算法
		vector<int> path ={0};
		int curr_sum = candidates[0];

		backTrack(path,curr_sum,candidates,target);
		return ans;
	}
};

class Solution2 {
public:
	vector<vector<int>> ans;

	// 路径，
	void backTrack(vector<int> &path,int &curr_sum,vector<int> candidates,int target)
	{
		// 终止条件
		if(curr_sum==target){
			for(int kk=0;kk<path.size();kk++){
				path[kk] = candidates[path[kk]];
			}
			ans.push_back(path);
			return;
		}

		if(curr_sum<target){
			// 只做比路径尾部更大的选择
			int lastEle = path.back();
			for(int i=lastEle;i<candidates.size();i++){
				path.push_back(i);
				curr_sum+=candidates[i];
				backTrack(path,curr_sum,candidates,target);
			}
		}
		// 撤销选择
		curr_sum -= candidates[ path.back()];
		path.pop_back();
	}


	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		sort(candidates.begin(),candidates.end() );
		// 回溯算法
		for(int i=0;i<candidates.size();i++){
			vector<int> path ={i};
			int curr_sum = candidates[i];
			backTrack(path,curr_sum,candidates,target);
		}

		return ans;
	}
};

int main()
{
	vector<int > candi = {2,3,6,7};
	int target  =7;
	Solution solu;

	vector<vector<int>> ans = solu.combinationSum(candi,target);
	system("pause");

}