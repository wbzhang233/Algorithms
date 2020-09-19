//
// Created by wbzhang on 2020/7/31.
//

#include "../common/common.h"

/* STL 最大堆、最小堆的应用 */
#include <iostream>
#include <vector>
#include <algorithm>    //

using namespace std;

/*
STL 堆操作
（1）make_heap()构造堆
void make_heap(first_pointer,end_pointer,compare_function);
默认比较函数是(<)，即最大堆。
函数的作用是将[begin,end)内的元素处理成堆的结构

（2）push_heap()添加元素到堆
void push_heap(first_pointer,end_pointer,compare_function);
新添加一个元素在末尾，然后重新调整堆序。该算法必须是在一个已经满足堆序的条件下。
先在vector的末尾添加元素，再调用push_heap

（3）pop_heap()从堆中移出元素
void pop_heap(first_pointer,end_pointer,compare_function);
把堆顶元素取出来，放到了数组或者是vector的末尾。
要取走，则可以使用底部容器（vector）提供的pop_back()函数。
先调用pop_heap再从vector中pop_back元素

（4）sort_heap()对整个堆排序
排序之后的元素就不再是一个合法的堆了。
*/

//最大堆
struct MaxHeapCmp
{
    inline bool operator()(const int &x,const int &y)
    {
        return x < y;
    }
};

//最小堆
struct MinHeapCmp
{
    inline bool operator()(const int &x, const int &y)
    {
        return x > y;
    }
};

void test()
{
    std::vector<int> data{ 3,1,7,4,99,75,34,10 };

    //堆排序
    std::make_heap(data.begin(), data.end(), MinHeapCmp());
    for (int n : data)
    {
        cout << n <<"\t";
    }
    cout<<endl;
    printf("------------------\n");

    //添加元素
    data.push_back(111);
    //再次堆排序
    std::push_heap(data.begin(), data.end(), MaxHeapCmp());
    for (int n : data)
    {
        cout << n <<"\t";
    }
    cout<<endl;
}

int main()
{
    test();
    printf("-ok-\n");
    getchar();

    return 0;
}


//int main(){
//
//    std::vector<double>numbers{2.5,10.0,3.5,6.5,8.0,12.0,1.5,6.0};
//    std::make_heap(std::begin(numbers), std::end(numbers));//{12 10 3.5 6.5 8 2.5 1.5 6}
////    std::make_heap(numbers.begin(),numbers.end());
//    cout<<"done"<<endl;
//    return 0;
//}
