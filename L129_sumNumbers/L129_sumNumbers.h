//
// Created by garen_lee on 2025/3/19.
/**
  ******************************************************************************
  * @file           : L129_sumNumbers.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/19
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L129_SUMNUMBERS_H
#define DEPTHFIRSTSEARCH_L129_SUMNUMBERS_H

#include "util.h"
class L129_sumNumbers : public LeetcodeDepthFirstSearch {
private:
    int dfs(TreeNode *root, int sum);
    int sumNumbers(TreeNode* root);
public:
    L129_sumNumbers() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L129_SUMNUMBERS_H
