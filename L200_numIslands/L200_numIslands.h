//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L200_numIslands.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L200_NUMISLANDS_H
#define DEPTHFIRSTSEARCH_L200_NUMISLANDS_H

#include "util.h"
class L200_numIslands : public LeetcodeDepthFirstSearch {
private:
    int numIslands(vector<vector<char>>& grid);
    void dfs(vector<vector<char>>& grid, int r, int c);
public:
    L200_numIslands(){}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L200_NUMISLANDS_H
