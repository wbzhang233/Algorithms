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