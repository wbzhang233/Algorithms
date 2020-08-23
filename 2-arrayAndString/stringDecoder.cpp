// 字符串解码 https://leetcode-cn.com/problems/decode-string/
// Created by wbzhang on 2020/8/23.
//
#include "../common/common.h"

class Solution {
public:
	string decodeString(string s) {
		// 建立一个栈，如果为右括号，则弹出
		stack<char> st;
		for(auto ele:s){
			if(ele!=']'){
				st.push(ele);
			}else{
				// 取出当前到右括号的字符串
				vector<char> st2;
				while(st.top()!='['){
					st2.push_back(st.top());
					st.pop();
				}
				// 弹出右括号
				st.pop();
				// 弹出数字
				int num = 0, p = 1;
				while(!st.empty() && isdigit(st.top()) ){
					num += (st.top()-'0')*p;
					st.pop();
					p*=10;
				}
				// 把括号中的字符串压入栈中
				while(num>0){
					for(auto riter=st2.rbegin();riter!=st2.rend();riter++){
						st.push(*riter);
					}
					num--;
				}

			}
		}
		// 栈中所有序列即为所求
		stack<char> fSt;
		while(!st.empty()){
			fSt.push(st.top() );
			st.pop();
		}
		string res="";
		while(!fSt.empty()){
			res.push_back(fSt.top());
			fSt.pop();
		}
		return res;
	}
};

int main()
{
	string s = "3[a]2[bc]";
	Solution solution;
	cout<<solution.decodeString(s)<<endl;

	return 0;
}