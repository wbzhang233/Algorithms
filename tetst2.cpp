//
// Created by wbzhang on 2020/3/26.
//

#include<iostream>
#include<math.h>
#define PI 3.141592653

using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<1) return 0;

    do {}
    while(cin.get()!=13) ;

    char cradius[n];
    cin.get(cradius,n);

    // 字符转数字
    int radius[n];
    for(int i=0;i<n;i++){
        radius[i] = cradius[i]-'0';
    }


    //就奇数偶数对应符号
    double area=0;
    for(int i=0;i<n-1;i++){
        area += radius[i]*radius[i]*pow(-1,i);
    }
    area+= radius[n-1]*radius[n-1];//最后一个为黑色

    cout<<area*PI<<endl;

    return 0;
}
