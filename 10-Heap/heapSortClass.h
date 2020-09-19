#include "../common/common.h"

class heapSortClass
{
//private:


public:
	vector<int> nums;
	int n;


    heapSortClass(vector<int> &_nums): nums(_nums){
		this->n = _nums.size()-1;
		sort();
		cout<<"Heap sort have done."<<endl;
    };
    ~heapSortClass(){
		cout<<"I love Zhangqi."<<endl;
	};

	// 排序
    void sort(){
		for(int i=0;i<=n;i++){
			shiftUp(i);
		}
		for(int i = n;i>=1;i--){
			swap(nums[0],nums[i]);
			shiftDown(i-1);
		}
    };
	//上浮
    void shiftUp(int ind){
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
	void shiftDown(int ind){
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
};