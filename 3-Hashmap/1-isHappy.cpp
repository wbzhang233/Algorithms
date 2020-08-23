//
// Created by wbzhang on 2020/3/13.
//

#include "../commonHeaders.h"

bool isHappy(int n) {
    //可以变为1说明，该数有且仅有一位为1，其余均为0，即该数字只能为1或者10的指数的整数
    // 当n不为10的n次方时，进行迭代
    //否则退出,该数为快乐数

    unordered_set<int> setNum;
    setNum.insert(n);
    while( !isTenPower(n) ){
        vector<int> nums = splitNumber(n);
        n=0;
        for(auto ele:nums){
            n+=ele*ele;
        }
        // 寻找过去是否出现该值
        if(setNum.count(n)==0 )
        {
            setNum.insert(n);
        }else return false; //如果迭代过程中n值处于循环，则必然不为快乐数
    }
    return true;

}

// 拆分整数
vector<int> splitNumber(int num){
    vector<int> res;
    // 不为个位数时，逐层相除
    while( num >=10){
        res.push_back(num%10);
        num=num/10;
    }
    res.push_back(num%10);

    return res;
}

// 判断该数是否为10的整数次方，即判断 不断的模10最后一位是否为1
bool isTenPower(int n){
    if(n==1) return true;
    while( n>=10){
        if(n%10!=0) return false;
        n=n/10;
    }
    if(n%10!=0) return false;
    return true;
}
