#include "heapSortClass.h"

int main()
{
    vector<int> nums = {1,3,4,2,5,10,7,9,8,12};
    heapSortClass hp(nums);
    hp.sort();
    for(auto ele:hp.nums) cout<<ele<<"\t";
    return 0;
}