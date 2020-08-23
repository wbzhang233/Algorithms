//#include "removeDuplicates.h"
#include "commonHeaders.h"

int main() {
        //ListNode *ls1=new ListNode(1);
        vector<int> nums1 = {1,2,2,1};
        vector<int> nums2 = {2};

    //int x = removeDuplicates(nums);
        //rotate1(nums,3);

        //vector<char> str = {'a','b','b','d','e'};

    //    cout<<"1:"<<*(str.begin()+str.size()-1)<<endl;
    //    cout<<"2:"<<*(str.end()-1)<<endl;
    //
    //    reverseString1(str);

        //vector<int > result = topKFrequent1(nums,2);

        //int result = singleNumber(nums);

       // vector<int> result = twoSum(nums,9);

        //bool result = containsDuplicate(nums);

        vector<int> result =intersect(nums1,nums2);


        std::cout << "Hello, World!" << std::endl;
//        cout<<"result:"<<result<<endl;
        for (auto ele:result) {
            cout<<ele<<"\t";
        }

        return 0;
}