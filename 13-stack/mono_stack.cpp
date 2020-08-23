// 单调栈
// Created by wbzhang on 2020/8/23.
//
#include "../common/common.h"

class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		int n = heights.size();
		vector<int> left(n), right(n); // 用于维护左右边界的结果

		stack<int> mono_stack;
		// 从左向右求左边界
		for (int i = 0; i < n; ++i) {
			// 栈顶元素大于当前值，则出栈，直到栈顶元素小于当前值；
			while (!mono_stack.empty() && heights[mono_stack.top()] >= heights[i]) {
				mono_stack.pop();
			}
			left[i] = (mono_stack.empty() ? -1 : mono_stack.top()); //求当前元素的左边界结果
			mono_stack.push(i); //将当前值的序号压入栈
		}

		// 同样方法求右边界
		 mono_stack = stack<int>();
		for (int i = n - 1; i >= 0; --i) {
			while (!mono_stack.empty() && heights[mono_stack.top()] >= heights[i]) {
				mono_stack.pop();
			}
			right[i] = (mono_stack.empty() ? n : mono_stack.top());
			mono_stack.push(i);
		}

		// 根据每个元素对应的左右边界（两者只差为柱子宽度），其值为柱子高度。求最大值。
		int ans = 0;
		for (int i = 0; i < n; ++i) {
			ans = max(ans, (right[i] - left[i] - 1) * heights[i]);
		}
		return ans;
	}
};

int main(){

	vector<int> nums= {2,1,5,6,2,3};
	Solution solu;
	int ans = solu.largestRectangleArea(nums);
	cout<<"ans: "<<ans<<endl;
	return 0;
}
