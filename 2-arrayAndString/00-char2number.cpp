// �ַ��������ֵ�ת��
// Created by wbzhang on 2020/3/12.
// ժ�Բ��ͣ�https://blog.csdn.net/u011251945/article/details/81609821?depth_1-utm_source=distribute.pc_relevant.none-task&utm_source=distribute.pc_relevant.none-task

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <sec_api/string_s.h>


using namespace std;

int main(){
    //// 1- ����ת�ַ���
    int num =12;
    char numS[10];
    // 1.1 ͨ���ڴ濽���ķ�ʽ��intת��Ϊ�ַ���
    sprintf_s(numS,"%d",num);
    cout<<"numS:"<< numS <<endl;

    // 1.2 �ַ������ַ���ת��
    int n0 = 101;
    string str1;
    stringstream ss;
    ss << n0;
    ss >> str1;
    cout<<"str1:"<< str1 <<endl;

    // ���� ��ostringstream
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

    //// 2-�ַ���ת����
    string str3 = "101";
    //c++11���ַ���תint
    int m = stoi(str3); // string to int
    //������������ת�ַ���int,float,long,double��
    string str4 = to_string(m); //����ת�ַ���

    //// 3- ���ַ���תΪ���ֽ��Ƹ�ʽ��ȡ����string�ı�﷽ʽ
    cout << "16���ƣ� " << stoi(str3, nullptr,16) <<" "<<"2���ƣ�"<<stoi(str3, nullptr, 2) << endl;
    cout << "10���ƣ�" << stoi(str3, nullptr, 10) << " " << "8���ƣ�" << stoi(str3, nullptr, 8) << endl;

    //// 4- c�����е��ַ���ת����
    // �Ҽǵ�Ӧ�û���wtoi��Щ��w��ʾ���ַ���ѧ��ͦ���

    //c�������ַ���תfloat
    float n = atof(str3.c_str()); // ascii to float
    //c�����ַ���תlong
    long n1 = atol(str3.c_str()); // ascii to long
    //c�����ַ���תint
    int n2 = atoi(str3.c_str());

    //// 5-��ĸ��Сдת����ascii
    string str5 = "nihao";
    //Сд��ĸת��д��ĸ
    for (int i = 0; i < str5.size(); i++)
        str5[i] = toupper(str5[i]);
    //Сд��ĸת��д��ĸ
    for (int i = 0; i < str5.size(); i++)
        str5[i] = tolower(str5[i]);
    //����תASCII
    int n3 = 65;
    char c = toascii(n3);
    system("pause");

    return 0;
}