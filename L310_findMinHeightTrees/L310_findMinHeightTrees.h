//
// Created by garen_lee on 2025/5/14.
/**
  ******************************************************************************
  * @file           : L310_findMinHeightTrees.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/14
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L310_FINDMINHEIGHTTREES_H
#define DEPTHFIRSTSEARCH_L310_FINDMINHEIGHTTREES_H

#include "util.h"
class L310_findMinHeightTrees : public LeetcodeDepthFirstSearch {
private:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges);
    int findLongestNode(int u, vector<int>& parent, vector<vector<int>>& ad);
public:
    L310_findMinHeightTrees() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L310_FINDMINHEIGHTTREES_H
