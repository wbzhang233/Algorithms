#include "heapSortClass.h"

// 排序
void heapSort::sort(){
    for(int i=2;i<=n;i++){
        shiftUp(i);
    }
    for(int i = n;i>=2;i--){
        swap(nums[1],nums[i]);
        shiftDown(i-1);
    }

}; 

//上浮
void heapSort::shiftUp(int ind)
{
    int p;
    do{
    	if(ind==1) break;
        p = ind/2;
        if(nums[p]<=nums[ind]) break;
        swap(nums[p],nums[ind]);
        ind = p;
    }while(ind!=1);
};


// 下沉
void heapSort::shiftDown(int ind)
{
    // int ind =1;
    int c;
    while(1){
        c = 2*ind;
        if(c>n) break;
        if(c+1<=n){
            if(nums[c+1]<nums[c]){
                c++;
            }
            if(nums[ind]<=nums[c])    break;
            swap(nums[c],nums[ind]);
            ind = c;
        }
    }

}; 


heapSort::heapSort(vector<int> &_nums):nums(_nums)
{
    this->n = _nums.size()-1;
    sort();
    cout<<"Heap sort have done."<<endl;
}


heapSort::~heapSort()
{
    cout<<"zq said love me."<<endl;
}