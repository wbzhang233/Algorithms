//
// Created by wbzhang on 2020/8/22.
//
#include "./common/common.h"

#define TRIPLEMIN(A,B,C) ( (A)<(B)?(A):(B) )<(C) ?((A)<(B)?(A):(B)):(C);

#define TRIPLEMIN(A,B,C) ( (A)<(B)?(A):(B) )<(C) ?((A)<(B)?(A):(B)):(C);

class Solution {
public:
	int tripleMin(int a,int b,int c){
		int res;
		if(2*a<=3*b && 2*a<=5*c){
			res = 2*a;
		}else if(3*b<=2*a && 3*b<=5*c){
			res = 3*b;
		}else if(5*c<=2*a && 5*c<=3*b){
			res = 5*c;
		}
		return res;
	}

	int nthUglyNumber(int n) {
		int *uglyNums= new int[n];
		uglyNums[0] = 1;
		int *twoLimit = uglyNums,*threeLimit = uglyNums,*fiveLimit = uglyNums;

		for(int i=1;i<n;i++){
			uglyNums[i] = tripleMin(*twoLimit,*threeLimit,*fiveLimit);

			while( (*twoLimit)*2==uglyNums[i] ){
				twoLimit++;
			}
			while( (*threeLimit)*3==uglyNums[i] ){
				threeLimit++;
			}
			while( (*fiveLimit)*5==uglyNums[i] ){
				fiveLimit++;
			}
		}
		int res  = uglyNums[n-1];
		delete[] uglyNums;
		return res;
	}
};
int main()
{
	int n = 10;
	Solution solu;
	cout<<solu.nthUglyNumber(n)<<endl;
	// 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 是前 10 个丑数。

	return 0;
}