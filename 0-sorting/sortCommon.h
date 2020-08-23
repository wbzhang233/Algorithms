// 十大排序算法
// 摘自：https://www.runoob.com/w3cnote/shell-sort.html
// Created by wbzhang on 2020/3/15.
//

#ifndef ALGORITHMS_SORTCOMMON_H
#define ALGORITHMS_SORTCOMMON_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

/** 0-调试辅助函数  **/
// 0-输出数组
template <typename T>
void coutNums(vector<T> nums){
    cout<<"cout numbers..."<<endl;
    for(auto ele:nums){
        cout<<ele<<",";
    }
    cout<<endl;
}

template <typename T>
void coutNums(T array[],int len){
    cout<<"cout numbers..."<<endl;
    for(int i=0;i<len;i++){
        cout<<array[i]<<",";
    }
}

/** 1-冒泡排序 **/
template <typename T>
void bubbleSort(T nums[],int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-1-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

// 逆序对的个数
int count_inversion(int a[], int n)
{
    int count = 0;
    for(int i = 0; i < n - 1; ++i)
        for(int j = i + 1; j < n; ++j)
            if(a[i] > a[j]) count += 1;
    return count;
}

template <typename T>
int countInversion(vector<T> &arr){
    int count = 0;
    for (int i = 0; i < arr.size()-1; ++i) {
        for (int j = 0; j < arr.size()-1-i; ++j) {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
    }
    return count;
}


template<typename T>
void bubbleSort(vector<T> &nums){
    for(int i=0;i<nums.size()-1;i++){
        for(int j=0;j<nums.size()-1-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}


template <typename T>
void bubbleSort2(T nums[],int len){
    for (int i = 0; i < len-1; ++i) {
        for (int j = 0; j <len-1-i; ++j) {
            if(nums[j]>nums[j+1]) swap(nums[i],nums[j]);
        }
    }
}

/** 2-选择排序 **/
template <typename T>
void selectSort(T nums[],int len){
    for(int i=0;i<len-1;i++){
        int minInd = i;
        for(int j=i+1;j<len;j++){
            if(nums[j]<nums[minInd]){
                minInd = j;
            }
        }
        swap(nums[i],nums[minInd]);
    }
}

/** 3-插入排序 **/
/** 介绍：类似于扑克牌的排序，以第一个数字为有序区，后续数字为无序区；
 * 从无序区取待插入数字temp，从当前位往左搜索，若该位大于temp，则将该位后移，直到找到第kk位小于temp，则将temp插入kk位的下一位
 * 注意位的边界条件，一直循环以上过程，直到所有无序区均为变为有序 **/
 /** 复杂度分析
  * 时间复杂度：外循环n-1次，内循环平均为(1+n-1)/2次；因而总复杂度为O(n^2)
  * 空间复杂度：只占用额外的temp，不随n变化，O(1)
  * **/
template <typename T>
void insertionSort(T nums[],int len){
    for(int i=1;i<len;i++){
        int temp = nums[i]; // 取出当前待排序数字
        int j=i-1;
        while(j>=0 && nums[j]>temp){
            nums[j+1]=nums[j]; // 该位大于temp，则右移
            j--;
        }
        nums[j+1]=temp; //第j为小于temp，将temp插入至其下一位
    }
}

template <typename T>
void insertSort(vector<T> &nums){
    for(int i=1;i<nums.size();i++){
        int key = nums[i];
        int j = i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}

/** 4-希尔排序？？？ **/
template <typename T>
void shellSort(T nums[],int len){

}

template <typename T>
void shell_sort(T array[], int length) {
    int h = 1;
    while (h < length / 3) {
        h = 3 * h + 1;
    }
    while (h >= 1) {
        for (int i = h; i < length; i++) {
            for (int j = i; j >= h && array[j] < array[j - h]; j -= h) {
                std::swap(array[j], array[j - h]);
            }
        }
        h = h / 3;
    }
}


template <typename T>
void shellSort(vector<T> nums){

}


/** 5-归并排序 **/
template <typename T>
void mergeSort(T nums[],int len){

}


/** 6-快速排序 **/
template <typename T>
void quickSort(T nums[],int len){

}

// 摘自Runoob
// 分割函数
template <typename T>
int partition(T A[], int low, int high) {
    int pivot = A[low];
    while (low < high) {
        while (low < high && A[high] >= pivot) {
            --high;
        }
        A[low] = A[high];
        while (low < high && A[low] <= pivot) {
            ++low;
        }
        A[high] = A[low];
    }
    A[low] = pivot;
    return low;
}

// 快排母函数
template <typename T>
void QuickSort(T A[], int low, int high)
{
    if (low < high) {
        int pivot = partition(A, low, high);
        QuickSort(A, low, pivot - 1);
        QuickSort(A, pivot + 1, high);
    }
}

// 快排实现2-vector
/** 快排子函数，实现对low-high区间进行分区排序 */
template <typename T>
int partition(vector<T> &nums, int low, int high){
    int pivot = nums[low];
    while(low<high){
        //从high开始递减遍历，直到high位小于pivot，退出
        while(low<high && nums[high]>=pivot){
            --high ;
        }
        nums[low] = nums[high]; //将小于pivot的数放到左边
        //从low开始递进遍历，直到low位大于pivot，退出
        while(low<high && nums[low]<=pivot){
            ++low;
        }
        nums[high] = nums[low]; //将大于pivot的数放到左边
    }//重复以上过程，直到low位与high位相等
    nums[low] = pivot;//将基准为插入到中间
    return low;//返回该区间快排后的基准位置，随后对基准左右的两端序列递归进行以上过程
}

template <typename T>
void QuickSort(vector<T> &nums,int low,int high){
    if(low < high){
        int pivot = partition(nums,low,high);
        QuickSort(nums,low,pivot-1);
        QuickSort(nums,pivot+1,high);
    }
}

template <typename T>
void QuickSort(vector<T> &nums){
    int low = 0,high = nums.size();
    if(low < high){
        int pivot = partition(nums,low,high);
        QuickSort(nums,low,pivot-1);
        QuickSort(nums,pivot+1,high);
    }
}


/** 7-堆排序 **/

/** 8-计数排序
 * 计数排序的核心在于将输入的数据值转化为键存储在额外开辟的数组空间中。
 * 作为一种线性时间复杂度的排序，计数排序要求输入的数据必须是有确定范围的整数。
 * 时间复杂度为n+k，k为数组中的最大值
 * @param ini_arr
 * @param sorted_arr
 * @param n
 */
template <typename T>
int getMaxNumber(T array[],int len){
    if(len<1) return 0;
    int maxNum = array[0];
    int i = len-1;
    while(i>0){
        if(array[i]>maxNum) maxNum = array[i];
        i--;
    }
   return maxNum;
}

void counting_sort(int *ini_arr, int *sorted_arr, int n) {
    int kk = getMaxNumber(ini_arr,n);

    int *count_arr = (int *) malloc(sizeof(int) * kk); //为计数数组分配内存
    int i, j, k;
    for (k = 0; k < kk; k++)
        count_arr[k] = 0;
    for (i = 0; i < n; i++)
        count_arr[ini_arr[i]]++; // 统计0-maxNum之间，数组中每个数出现的次数

    // 对所有计数累计相加
    for (k = 1; k < kk; k++)
        count_arr[k] += count_arr[k - 1];
    // 进行反向填充
    for (j = n; j > 0; j--)
        //  ini_arr[j - 1] 初始第j-1个数
        // count_arr[ ini_arr[j - 1] ]，初始第j-1个数的计数减一
        sorted_arr[--count_arr[ ini_arr[j - 1] ] ] = ini_arr[j - 1];
    free(count_arr);
}

// 求最大值
template <typename T>
int getMaxNumber(vector<T> array){
    int len = array.size();
    if(len<1) return 0;
    int maxNum = array[0];
    int i = len-1;
    while(i>0){
        if(array[i]>maxNum) maxNum = array[i];
        i--;
    }
    return maxNum;
}

// 计算排序2
vector<int> countingSort(vector<int> nums){
    vector<int> sortedNums(nums.size());
    int topN = getMaxNumber(nums);

    // 统计每个数字出现的次数
    vector<int> *courtingNums = new vector<int>(topN);
    for(auto ele:nums){
        courtingNums->at(ele-1) ++ ;
    }

    // 连续求和
    for(int i=1;i<topN;i++){
        courtingNums->at(i) += courtingNums->at(i-1);
    }

    // 反向填充
    for(int j=nums.size();j>0;j--){
        sortedNums[ --courtingNums->at(nums[j-1]-1) ] = nums[j-1];
    }

    delete(courtingNums);
    return sortedNums;
}

/** 9-桶排序 **/



/** 10-基数排序 **/


#endif //ALGORITHMS_SORTCOMMON_H
