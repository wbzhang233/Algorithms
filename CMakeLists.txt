cmake_minimum_required(VERSION 3.14)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

# 0-宏定义
add_executable(defineMacro 0-define/defineMacro.cpp)

# 1-算法基础题
add_executable(Algorithms main.cpp mergeTwoLists.h commonHeaders.h 2-rotate.cpp 1-removeDuplicates.cpp
        3-reverseString.cpp 5-histgram.cpp 4-reverseVowels.cpp 6-singleNumber.cpp
        7-maxProfit.cpp 8-twosum.cpp 9-duplicates.cpp 10-maxIntersection.cpp )
# 2-队列和栈
add_executable(queueAndStack ./1-QueueAndStack/MyQueue.cpp 1-QueueAndStack/1-circularQueue.h)
add_executable(largestRectangleArea ./13-stack/mono_stack.cpp)

# 3-数组和字符串
add_executable(arrayAndString 2-arrayAndString/arrayTest.cpp 2-arrayAndString/2-spiralOrder.h)
add_executable(minSubArrayLen minSubArrayLen.cpp)
add_executable(stringDecoder ./2-arrayAndString/stringDecoder.cpp) #字符串解码
add_executable(rotateImage ./2-arrayAndString/rotateImage.cpp)

# 4-hashmap
add_executable(hashmap 3-Hashmap/hashmap.cpp 3-Hashmap/1-isHappy.cpp 3-Hashmap/2-isIsomorphic.cpp)

# 5-sort
add_executable(sort ./0-sorting/sort.cpp ./0-sorting/sortCommon.h)
add_executable(countInversion ./0-sorting/countInversion.cpp) # 逆序对的个数，归并排序
add_executable(mergeSortTest ./0-sorting/mytest.cpp)

#
add_executable(test1 test1.cpp)
add_executable(test2 tetst2.cpp)


## 6-二叉树
add_executable(preInConstruct ./3-Tree/preInConstruct.cpp)

# 7.STL库
add_executable(stl_usage ./4-STL/stl_usage.cpp)

# 8.BFS之openlock
add_executable(openlock ./6-BFS/6_1_openLock.cpp)

# 9.backtrack
# 组合
add_executable(combine ./7-Backtrack/combine.cpp)
# 组合2
add_executable(combine2 ./7-Backtrack/combine2.cpp)
# 排列
add_executable(permute ./7-Backtrack/permute.cpp)
# 矩阵中的路径
add_executable(existPath1 ./7-Backtrack/exist.cpp)
add_executable(existPath2 ./7-Backtrack/existPath.cpp)
# N皇后问题
add_executable(eightQueen ./7-Backtrack/eightQueen.cpp)


# 10.递归
#divingBoard
add_executable(divingBoards ./8-Recursion/divideBoards.cpp)

# 11.heap
add_executable(heapTest ./10-Heap/heapTest.cpp)
add_executable(priority_queue ./10-Heap/priority_queue.cpp)

# 11-dfs
add_executable(uniquePath ./11-dfs/uniquePath.cpp)

# 14-graph
add_executable(prim ./14-Graph/prim.cpp)

# 15-unionFind 并查集
add_executable(unionFind 15-unionFind/unionFind.cpp)

# 16-trie 前缀树
add_executable(mapsum 16-Trie/mapsum.cpp)

# 剑指offer
# 寻找数字
add_executable(findDigit ./swordToOffer/findDigit.cpp)
# 最长子串
add_executable(lengthOfLongestSubstring ./swordToOffer/lengthOfLongestSubstring.cpp)
# 丑数
add_executable(uglyNumber uglyNumber.cpp)


##其他高频面试题
add_executable(reverseList 00-TopFrequency/reverseList.cpp) #反转链表
add_executable(cycleList 00-TopFrequency/cycleList.cpp) #链表是否存在环
add_executable(removeElement 00-TopFrequency/removeElement.cpp) #删除链表中的元素
add_executable(myStrStr ./myStrStr.cpp) #子串
add_executable(palindromStr ./12-dp/palindromStr.cpp) #回文子串
add_executable(majoriryNumber ./majoriryNumber.cpp) # 主元素
