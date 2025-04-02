//
// Created by garen_lee on 2025/4/2.
/**
  ******************************************************************************
  * @file           : L145_postorderTraversal.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/2
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L145_POSTORDERTRAVERSAL_H
#define DEPTHFIRSTSEARCH_L145_POSTORDERTRAVERSAL_H

#include "util.h"
class L145_postorderTraversal : public LeetcodeDepthFirstSearch {
private:
    vector<int> postorderTraversal(TreeNode* root);
    void dfs(TreeNode* root);
    vector<int> res_;
public:
    L145_postorderTraversal() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L145_POSTORDERTRAVERSAL_H
