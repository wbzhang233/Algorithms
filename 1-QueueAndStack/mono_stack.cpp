//
// Created by wbzhang on 2020/9/20.
//

class MaxInnerRec {
public:
	int countArea(vector<int> A, int n) {
		// write code here
		A.push_back(0);
		stack<int> stk;
		int maxArea = 0;
		for(int i = 0;i<=n;i++)
		{
			while(!stk.empty() && A[i]<A[stk.top()])
			{
				int top= stk.top();
				stk.pop();
				maxArea = max(maxArea,A[top]*(stk.empty()? i:(i - stk.top() -1)));
			}
			stk.push(i);
		}
		return maxArea;
	}
};
