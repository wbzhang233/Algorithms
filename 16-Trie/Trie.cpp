//
// Created by wbzhang on 2020/9/13.
//
#include "../common/common.h"

class Trie {
private:
	bool isEnd;
	Trie* next[26];
public:
	Trie() {
		isEnd = false;
		memset(next, 0, sizeof(next));
	}

	// 插入单词
	void insert(string word) {
		Trie* node = this;
		for (char c : word) {
			if (node->next[c-'a'] == NULL) {
				node->next[c-'a'] = new Trie();
			}
			node = node->next[c-'a'];
		}
		node->isEnd = true;
	}

	// 查询单词
	bool search(string word) {
		Trie* node = this;
		for (char c : word) {
			if (node->next[c - 'a'] == NULL) {
				return false;
			}
			node = node->next[c - 'a'];
		}
		return node->isEnd;
	}

	// 根据前缀查询
	bool startsWith(string prefix) {
		Trie* node = this;
		for (char c : prefix) {
			node = node->next[c-'a'];
			if (node == NULL) {
				return false;
			}
		}
		return true;
	}

};

int main()
{


	return 0;
}