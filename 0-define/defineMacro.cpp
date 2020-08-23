//
// Created by wbzhang on 2020/7/26.
//

#include <iostream>
using namespace std;

#define SWAP(a,b) {a^=b;b^=a;a^=b;}
#define SWAP2(a,b) {a+=b; b=a-b; a=a-b;}

// 定义两数之间的最大值的宏
#define DBLMAX(A,B) ( (A)>(B) ? (A):(B) )
#define MAX(A,B) (A) > (B) ? (A) : (B)
#define MAX1(x,y) ((x)>(y) ? (x) : (y))

template<typename T> T inline MAX2(T x, T y) { T _x = x; T _y = y; return (_x) > (_y) ? (_x) : (_y); }
template<typename T> T inline MAX4(T x, T y) { return (x) > (y) ? (x) : (y); }

// 三个数中的最大值的宏
#define TRIPLEMAX(A,B,C) ( ((A)>(B) ? (A):(B))>C?((A)>(B) ? (A):(B)):C)

// 两数相加宏
#define add(A,B) ((A)+(B))

// 两数相乘宏
#define mutiply(A,B) ((A)*(B))



int main()
{
    int a = 3;
    int b = 6;
    // 1- 两数最大值
    cout<<"b:"<<b<<endl;
    auto dbl_m = DBLMAX (a++, b++);
    cout <<"dbl_m:"<< dbl_m << " b:"<<b<<endl;
    auto dbl_m2 = MAX(a,b);
    cout <<"dbl_m2:"<< dbl_m2 << " b:"<<b<<endl;

    // 1.2 三数最大值
    int c = 8;
    auto m1 = TRIPLEMAX(a,b,c);
    cout<<"m1: "<<m1<<endl;

    // 1.3 两数交换
    SWAP2(a,b);
    cout<<"a:"<<a<<" b:"<<b<<endl;

    int d = 5;
    cout << d++ << endl;

    return 0;
}

