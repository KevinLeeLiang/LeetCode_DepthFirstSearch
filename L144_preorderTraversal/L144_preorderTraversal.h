//
// Created by garen_lee on 2025/4/2.
/**
  ******************************************************************************
  * @file           : L144_preorderTraversal.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/2
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L144_PREORDERTRAVERSAL_H
#define DEPTHFIRSTSEARCH_L144_PREORDERTRAVERSAL_H

#include "util.h"
class L144_preorderTraversal : public LeetcodeDepthFirstSearch {
private:
    vector<int> preorderTraversal(TreeNode* root);
    void dfs(TreeNode* root);
    vector<int> res_;
public:
    L144_preorderTraversal() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L144_PREORDERTRAVERSAL_H
