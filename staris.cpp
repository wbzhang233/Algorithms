//
// Created by wbzhang on 2020/8/18.
//

#include <iostream>
#include <vector>

using namespace std;

int getAns(int n)
{
	if(n==0) return 1;
	if(n<=2) return n;

	vector<int> dp(n+1,0);
	dp[1] = 1;
	dp[2] = 2;

	for(int i=3;i<n;i++){
		dp[i] = dp[i-1]+dp[i-2];
	}
	return dp[n];
}


int main()
{
	int n;
	cin>>n;


	cout<<"ans: "<<getAns(n)<<endl;

}