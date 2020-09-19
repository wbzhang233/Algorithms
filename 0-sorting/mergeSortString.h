//
// Created by wbzhang on 2020/9/19.
//

#ifndef ALGORITHMS_MERGESORTSTRING_H
#define ALGORITHMS_MERGESORTSTRING_H


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include "../common/common.h"
#include "sortCommon.h"

class mergeSort1 {
public:
	// 1- 归并排序
	template<typename T>
	void merge(vector<T> partA, vector<T> partB, vector<T> &ans) {
		if (partA.size() == 0 || partB.size() == 0) return;
		ans.clear();
		int ind1 = 0, ind2 = 0;
		while (ind1 < partA.size() || ind2 < partB.size()) {
			// A不为空，并且B为空或者A值小于B值时，压入A值
			if (ind1 < partA.size() && (ind2 == partB.size() || partA[ind1] < partB[ind2])) {
				ans.push_back(partA[ind1++]);
			} else ans.push_back(partB[ind2++]);
		}

	}

	template<typename T>
	void mergeSort(vector<T> &strs, int low, int high, vector<T> &out) {
		if (low >= high) return;

		// 分治
		int pivot = low + (high - low) >> 1;
		vector<T> left, right;
		mergeSort(strs, low, pivot, left);
		mergeSort(strs, pivot + 1, high, right);

		merge(left, right, out);
	}

// 2-歸併排序
	template<typename T>
	vector<T> merge(vector<T> partA, vector<T> partB) {
		vector<T> ans = {};
		int ind1 = 0, ind2 = 0;
		while (ind1 < partA.size() || ind2 < partB.size()) {
			// A不为空，并且B为空或者A值小于B值时，压入A值
			if (ind1 < partA.size() && (ind2 == partB.size() || partA[ind1] < partB[ind2])) {
				ans.push_back(partA[ind1++]);
			} else ans.push_back(partB[ind2++]);
		}

		return ans;
	}

// 双闭区间
	template<typename T>
	vector<T> mergeSort(vector<T> &strs, int low, int high) {
		if (low >= high) return {};

		// 分治
		int pivot = low + (high - low) >> 1;
		vector<T> left = mergeSort(strs, low, pivot);
		vector<T> right = mergeSort(strs, pivot + 1, high);

		// 合並
		return merge(left, right);
	}


};

class mergeSort2 {
public:
	void Merge(vector<int> &Array, int front, int mid, int end) {
		// preconditions:
		// Array[front...mid] is sorted
		// Array[mid+1 ... end] is sorted
		// Copy Array[front ... mid] to LeftSubArray
		// Copy Array[mid+1 ... end] to RightSubArray
		vector<int> LeftSubArray(Array.begin() + front, Array.begin() + mid + 1);
		vector<int> RightSubArray(Array.begin() + mid + 1, Array.begin() + end + 1);
		int idxLeft = 0, idxRight = 0;
		LeftSubArray.insert(LeftSubArray.end(), numeric_limits<int>::max());
		RightSubArray.insert(RightSubArray.end(), numeric_limits<int>::max());
		// Pick min of LeftSubArray[idxLeft] and RightSubArray[idxRight], and put into Array[i]
		for (int i = front; i <= end; i++) {
			if (LeftSubArray[idxLeft] < RightSubArray[idxRight]) {
				Array[i] = LeftSubArray[idxLeft];
				idxLeft++;
			} else {
				Array[i] = RightSubArray[idxRight];
				idxRight++;
			}
		}

//		int ind1 = 0, ind2 =0, ind =0;
//		while (ind1 < LeftSubArray.size() || ind2 < RightSubArray.size()) {
//			// A不为空，并且B为空或者A值小于B值时，压入A值
//			if (ind1 < LeftSubArray.size() && (ind2 == RightSubArray.size() || LeftSubArray[ind1] < RightSubArray[ind2])) {
//				Array[ind++] = LeftSubArray[ind1++];
//			} else Array[ind++] = RightSubArray[ind2++];
//		}

	}

	void MergeSort(vector<int> &Array, int front, int end) {
		if (front >= end)
			return;
		int mid = (front + end) / 2;
		MergeSort(Array, front, mid);
		MergeSort(Array, mid + 1, end);
		Merge(Array, front, mid, end);
	}

};

#endif //ALGORITHMS_MERGESORTSTRING_H
