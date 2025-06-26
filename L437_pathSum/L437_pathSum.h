//
// Created by garen_lee on 2025/6/25.
/**
  ******************************************************************************
  * @file           : L437_pathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/25
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L437_PATHSUM_H
#define L104_MAXDEPTH_CPP_L437_PATHSUM_H

#include "util.h"
class L437_pathSum : public LeetcodeDepthFirstSearch {
private:
    int pathSum(TreeNode* root, int targetSum);
    int dfs(TreeNode* root, long long curr, int targetSum);
    unordered_map<long long, int> prefix;
public:
    L437_pathSum() {}
    void test();
};


#endif //L104_MAXDEPTH_CPP_L437_PATHSUM_H
