#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// 用於将start到
void max_heapify(int arr[], int start, int end)
{
    // 建立父節點指標和子節點指標
    int dad = start;
    int son = dad * 2 + 1;
    while (son <= end)
    {                                                  // 若子節點指標在範圍內才做比較
        if (son + 1 <= end && arr[son] < arr[son + 1]) // 先比較兩個子節點大小，選擇最大的
            son++;
        if (arr[dad] > arr[son]) // 如果父節點大於子節點代表調整完畢，直接跳出函數
            return;
        else
        { // 否則交換父子內容再繼續子節點和孫節點比較
            swap(arr[dad], arr[son]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}

void heap_sort(int arr[], int len)
{
    // 初始化，i從最後一個父節點開始調整
    for (int i = len / 2 - 1; i >= 0; i--)
        max_heapify(arr, i, len - 1);
    // 先將第一個元素和已经排好的元素前一位做交換，再從新調整(刚调整的元素之前的元素)，直到排序完畢
    for (int i = len - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        max_heapify(arr, 0, i - 1);
    }
}

// 建堆
void max_heapify(vector<int> &arr, int start, int end)
{
    int dad = start;
    int son = dad * 2 + 1;
    while (son <= end)
    {
        if (son + 1 <= end && arr[son] < arr[son + 1])
        {
            son++;
        }
        if (arr[dad] > arr[son])
            return;
        else
        {
            swap(arr[dad], arr[son]);
            dad = son;
            son = dad * 2 + 1;
        }
    }
}

void heap_sort(vector<int> &arr)
{
	// 建堆
    int len = arr.size();
    for (int i = len / 2 - 1; i >= 0; i--)
        max_heapify(arr, i, len - 1);
    // 交换根节点，重新建堆，进行排序
    for (int i = len - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        max_heapify(arr, 0, i - 1);
    }
}

int main()
{
    // 1- nums
//    int arr[] = {5,7,4,6,3,2,1,9,10,4,6,18};
//	int len = (int)sizeof(arr) / sizeof(*arr);
//	heap_sort(arr, len);

    // 2- vector
	vector<int> arr = {5,7,4,6,3,2,1,9,10,4,6,18};
    int len = arr.size();
    heap_sort(arr);

    for (int i = 0; i < len; i++)
        cout << arr[i] << ' ';
    cout << endl;
    return 0;
}