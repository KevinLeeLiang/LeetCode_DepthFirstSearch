//
// Created by garen_lee on 2025/3/5.
/**
  ******************************************************************************
  * @file           : L113_pathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/5
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L113_PATHSUM_H
#define DEPTHFIRSTSEARCH_L113_PATHSUM_H

#include "util.h"
class L113_pathSum : public LeetcodeDepthFirstSearch {
private:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum);
    void dfs(TreeNode *root, int targetSum, vector<int> &path, vector<vector<int>> &res);
public:
    L113_pathSum() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L113_PATHSUM_H
