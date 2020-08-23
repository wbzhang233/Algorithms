// 字符串与数字的转换
// Created by wbzhang on 2020/3/12.
// 摘自博客：https://blog.csdn.net/u011251945/article/details/81609821?depth_1-utm_source=distribute.pc_relevant.none-task&utm_source=distribute.pc_relevant.none-task

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <sec_api/string_s.h>


using namespace std;

int main(){
    //// 1- 数字转字符串
    int num =12;
    char numS[10];
    // 1.1 通过内存拷贝的方式将int转化为字符串
    sprintf_s(numS,"%d",num);
    cout<<"numS:"<< numS <<endl;

    // 1.2 字符串的字符流转换
    int n0 = 101;
    string str1;
    stringstream ss;
    ss << n0;
    ss >> str1;
    cout<<"str1:"<< str1 <<endl;

    // 或者 用ostringstream
    string str0;
    ostringstream os;
    os << n0;
    str0 = os.str();
    cout<<"str0:"<< str0 <<endl;


    //1.3 c_str
    string str2 = "123";
    str2.append("12");
    char *dest = new char [10];
    strcpy_s(dest, 5, str2.c_str());
//    cout<"dest:" << (*dest) <<endl;

    //// 2-字符串转数字
    string str3 = "101";
    //c++11中字符串转int
    int m = stoi(str3); // string to int
    //各种数字类型转字符串int,float,long,double等
    string str4 = to_string(m); //数字转字符串

    //// 3- 将字符串转为各种进制格式，取决于string的表达方式
    cout << "16进制： " << stoi(str3, nullptr,16) <<" "<<"2进制："<<stoi(str3, nullptr, 2) << endl;
    cout << "10进制：" << stoi(str3, nullptr, 10) << " " << "8进制：" << stoi(str3, nullptr, 8) << endl;

    //// 4- c语言中的字符串转数字
    // 我记得应该还有wtoi这些，w表示宽字符，学问挺多的

    //c语言中字符串转float
    float n = atof(str3.c_str()); // ascii to float
    //c库中字符串转long
    long n1 = atol(str3.c_str()); // ascii to long
    //c库中字符串转int
    int n2 = atoi(str3.c_str());

    //// 5-字母大小写转换与ascii
    string str5 = "nihao";
    //小写字母转大写字母
    for (int i = 0; i < str5.size(); i++)
        str5[i] = toupper(str5[i]);
    //小写字母转大写字母
    for (int i = 0; i < str5.size(); i++)
        str5[i] = tolower(str5[i]);
    //数字转ASCII
    int n3 = 65;
    char c = toascii(n3);
    system("pause");

    return 0;
}