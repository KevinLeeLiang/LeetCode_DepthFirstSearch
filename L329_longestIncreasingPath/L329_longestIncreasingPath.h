//
// Created by garen_lee on 2025/5/21.
/**
  ******************************************************************************
  * @file           : L329_longestIncreasingPath.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/21
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L329_LONGESTINCREASINGPATH_H
#define DEPTHFIRSTSEARCH_L329_LONGESTINCREASINGPATH_H

#include "util.h"
class L329_longestIncreasingPath : public LeetcodeDepthFirstSearch {
private:
    int rows;
    int cols;
    int dir[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
    int dfs(vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& memo);
    int longestIncreasingPath(vector<vector<int>>& matrix);
public:
    L329_longestIncreasingPath() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L329_LONGESTINCREASINGPATH_H
