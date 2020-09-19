//
// Created by wbzhang on 2020/9/9.
//
#include <wrl.h>
#include "../common/common.h"

class MapSum {
private:
	bool isEnd; // 是否为最后一个字母
	MapSum* next[26]; // 字母表
	int value; // 若为最后一个字母，其对应的值

	// 深度优先遍历算法
	int dfs(MapSum* root) {
		if(!root) return 0; // 递归基：如果当前访问的MapSum为空，则直接返回0

		int res = 0;
		if(root->isEnd) res += root->value; // 若当前节点不为空且isEnd，则加上其值
		for(MapSum* cur : root->next) { // 再遍历当前节点的next数组中所有的MapSum
			res += dfs(cur);
		}

		return res;
	}
public:
	/** Initialize your data structure here. */
	MapSum() {
		isEnd = false;
		memset(next, 0, sizeof(next));
		value = 0;
	}

	void insert(string key, int val) {
		MapSum* node = this;
		for(char ch : key) {
			if(node->next[ch - 'a'] == NULL) {
				node->next[ch - 'a'] = new MapSum();
			}
			node = node->next[ch - 'a'];
		}
		node->isEnd = true;
		node->value = val; // 相比较正常的前缀树，只是新增了一个value属性
	}

	int sum(string prefix) {
		MapSum* node = this;
		for(char ch : prefix) {
			if(node->next[ch - 'a'] == NULL) return 0;
			node = node->next[ch - 'a'];
		}
		return dfs(node);
	}
};

//class MapSum {
//private:
//	int value;
//	bool isEnd;
//	MapSum* next[26];
//public:
//	/** Initialize your data structure here. */
//	MapSum() {
//		this->value = 0;
//		this->isEnd = false;
//		memset(next,0,sizeof(this->next));
//	}
//
//	void insert(string key, int val) {
//		MapSum* node = this;
//		for(int i=0;i<key.size();++i){
//			if(node->next[key[i]-'a']== NULL){
//				node->next[key[i]-'a'] = new MapSum();
//			}
//			node = node->next[key[i]-'a'];
//		}
//		node->value = val;
//		node->isEnd = true;
//	}
//
//	void dfs(int &res,MapSum *node){
//		if(node==NULL) return;
//		if(node->isEnd){
//			res+=node->value;
//			return;
//		}
//
//		// 做选择
//		for(int i=0;i<26;++i){
//			dfs(res,node->next[i]);
//		}
//	}
//
//
//	int sum(string prefix) {
//		MapSum* node = this;
////		for(int i=0;i<prefix.size();++i){
////			if(node->next[prefix[i]-'a']==NULL){
////				return 0;
////			}
////			node = node->next[prefix[i]-'a'];
////		}
//
//		for(char ch : prefix) {
//			if(node->next[ch - 'a'] == NULL) return 0;
//			node = node->next[ch - 'a'];
//		}
//
//		// 找到了该前缀最终的节点，往后遍历所有子节点
//		int res  = 0 ;
//		dfs(res,node);
//		return res;
//	}
//};

int main()
{
	MapSum* obj = new MapSum();

	obj->insert("apple",3);
	int param_1 = obj->sum("ap");
	cout<<param_1<<endl;

	obj->insert("app",2);
	int param_2 = obj->sum("ap");
	cout<<param_2<<endl;

	return 0;
}


/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */