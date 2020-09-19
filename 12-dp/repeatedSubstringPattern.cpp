#include "../common/common.h"

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();
        if(n<2 ) return true;

        int *table = new int[26];
        for(int i=0;i<26;i++){
            table[i]=-1;
        }
        // 记录每个字母第一次出现的位置
        int maxPose = 0;
        for(int i=0;i<n;i++){
            if(table[s[i]-'a']==-1){
                table[s[i]-'a'] = i;
                maxPose = max(maxPose,table[s[i]-'a']);     
            }
        }
        delete[] table;
 
        cout<<maxPose<<endl;
        if(maxPose+1==n || n%(maxPose+1)!=0) return false;
        // 长度为maxPose才能包含所有不同种类的字符串
        for(int j=0;j<=maxPose;j++){
            // 然后
            for(int kk=j;kk<n;kk+=maxPose+1){
                if(s[kk]!=s[j] ) return false;
            }
        }
        return true;
    }
};

int main()
{


    return 0;
}