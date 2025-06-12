//
// Created by garen_lee on 2025/6/11.
/**
  ******************************************************************************
  * @file           : L404_sumOfLeftLeaves.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/11
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L404_SUMOFLEFTLEAVES_H
#define DEPTHFIRSTSEARCH_L404_SUMOFLEFTLEAVES_H

#include "util.h"
class L404_sumOfLeftLeaves : public LeetcodeDepthFirstSearch {
private:
    int sumOfLeftLeaves(TreeNode* root);
    void dfs(TreeNode *root, int &res);
public:
    L404_sumOfLeftLeaves() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L404_SUMOFLEFTLEAVES_H
