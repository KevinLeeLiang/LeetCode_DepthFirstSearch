//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : L94_inorderTraversal.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L94_INORDERTRAVERSAL_H
#define DEPTHFIRSTSEARCH_L94_INORDERTRAVERSAL_H

#include "util.h"
class L94_inorderTraversal : public LeetcodeDepthFirstSearch {
private:
    vector<int> inorderTraversal(TreeNode* root);
    void dfs(TreeNode *root, vector<int> &ans);
public:
    L94_inorderTraversal(){}
    ~L94_inorderTraversal(){}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L94_INORDERTRAVERSAL_H
