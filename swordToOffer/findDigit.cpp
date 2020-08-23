//
// Created by wbzhang on 2020/8/17.
//

#include "../common/common.h"

class Solution {
public:
	int findNthDigit(int n) {
/*		 1-9,1*10=10 1*() 1*10^(1-1)*9
		 10-99,(99-10+1)*2=180  2*10^(2-1)*9
		100-999,(999-100+1)*3=2700, 3*10^(3-1)*9
		 ... i*10^(i-1)*9 ；i==1,2,3...
		 考虑任意数字,34521
		 最大的n位数在序列中排序为sum(i*)*/
		int i=1;
		n-=1;
		while(n>=i*pow(10,i-1)*9){
			n -= i*pow(10,i-1)*9;
			i++;
		}
		// 找到这个数小于n个999，并且大于(n-1)个9；可确定该位所在数的位数为i;
		int num = n/i+pow(10,i-1);

		// 答案为Num的第n%3位
		string numStr;
		while(num!=0){
			numStr.push_back(num%10+'0');
			num/=10;
		}

		return numStr[numStr.size()-1-n%i]-'0';
	}

	int findNthDigit2(int n) {
		int i=1;
		n-=1;
		while(n>=i*pow(10,i-1)*9){
			n -= i*pow(10,i-1)*9;
			i++;
		}

		int num = n/i+pow(10,i-1);
		string numStr;
		while(num!=0){
			numStr.push_back(num%10+'0');
			num/=10;
		}
		return numStr[numStr.size()-1-n%i]-'0';
	}

	int findNthDigit3(int n) {
		int i=1;
		n-=1;
		while(n>=i*pow(10,i-1)*9){
			n -= i*pow(10,i-1)*9;
			i++;
		}

		int num = n/i+pow(10,i-1);
		// 求该m位数字的第n%i位
		// 以35435的第2位为例，不就是mod(35435/(10^m-i),10)
		int x= (int)(num/pow(10,i-n%i-1));

		return  x%10;

	}
};

int main(){

	Solution solu;
	cout<<solu.findNthDigit3(1001)<<endl;

	return 0;
}