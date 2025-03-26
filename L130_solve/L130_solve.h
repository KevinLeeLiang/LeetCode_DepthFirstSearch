//
// Created by garen_lee on 2025/3/26.
/**
  ******************************************************************************
  * @file           : L130_solve.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/26
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L130_SOLVE_H
#define DEPTHFIRSTSEARCH_L130_SOLVE_H

#include "util.h"
class L130_solve : public LeetcodeDepthFirstSearch {
private:
    void dfs(vector<vector<char>>& board, int i, int j);
    void solve(vector<vector<char>>& board);
public:
    L130_solve() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L130_SOLVE_H
