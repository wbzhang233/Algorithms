//
// Created by wbzhang on 2020/8/16.
//

// 0-1背包问题
class Solution{

	// 0-1背包问题
	void backpackZeroOne(){

	}

	void backpackZeroOne2(){


	}

	// 完全背包问题
	void backpackUnlimited(){

	}

	void coins(){
		// dp[i]表示凑出金额i所需最少的金币数，则dp[i]=min{dp[i-coin[jj]]}
		// dp的初始值设定
		//

		for(int i=0;i<coins.size();++i){
			// 遍历每个硬币
			for(int j=coins[i];j<=amount;j++){
				dp[j]=max(dp[j-coins[i] ]+ 1,dp[j]); //当前硬币能放下，则放+1；否则
			}
		}
	}

	// 多重背包问题
	void backpackMultiLevel(){

	}

};

int main(){

	Solution solu;
#if 1
	// 0-1背包问题
	solu.backpackZeroOne();


#elif 0

#elif 0

#endif

	return 0;
}