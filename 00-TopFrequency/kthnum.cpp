#include "./common/common.h"

class Solution {
public:
    int getKthMagicNumber(int k) {
        if(k==1) return 1;

        int lt = 0,lf = 0,ls = 0; // 3,5,7的上限
        vector<int> nums;
        nums.push_back(1);

        while(k>1){
            int tmp1 = min(3*nums[lt],5*nums[lf]);
            int next = min(tmp1,7*nums[ls]);
            nums.push_back(next);
            // 其中3*lt,5*lf，7*lf 取小于当前已有的最大素数的边界值进行更新
            while(3*nums[lt]<=next){
                ++lt;
            }
            while(5*nums[lf]<=next){
                ++lf;
            }
            while(7*nums[ls]<=next){
                ++ls;
            }
            cout<<next<<" ";
            k--;
        }
        return nums[2];
    }
};

class Solution2 {
public:
    int getKthMagicNumber(int k) {
        if(k==1) return 1;

        int lt = 0,lf = 0,ls = 0; // 3,5,7的上限
        vector<int> nums(k,1);
        nums[0] = 1;

        for(int i=1;i<k;++i){
            int tmp1 = min(3*nums[lt],5*nums[lf]);
            int next = min(tmp1,7*nums[ls]);
            nums[i++] = next;
            // 其中3*lt,5*lf，7*lf 取小于当前已有的最大素数的边界值进行更新
            if(3*nums[lt]==next){
                ++lt;
            }
            if(5*nums[lf]==next){
                ++lf;
            }
            if(7*nums[ls]==next){
                ++ls;
            }
            cout<<next<<" ";
        }
        cout<<"sz:"<<nums.size()<<endl;
        return nums[k-1];
    }
};

int main()
{
    int k =3;
    Solution2 Solu;
    cout<<Solu.getKthMagicNumber(k)<<endl;

}