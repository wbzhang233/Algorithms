#include "../common/common.h"

const char table[3] = {'@','$','&'};

string intToA(int n,int radix)    //n是待转数字，radix是指定的进制
{
	string ans="";
	do{
		int t=n%radix;
		if(t>=0&&t<=9)	ans+=table[t];
		else ans+=t-10+'a';
		n/=radix;
	}while(n!=0);	//使用do{}while（）以防止输入为0的情况
	reverse(ans.begin(),ans.end());
	return ans;	
}

int main()
{
    int n = 123;

    cout<<intToA(n,3)<<endl;
    return 0;
}