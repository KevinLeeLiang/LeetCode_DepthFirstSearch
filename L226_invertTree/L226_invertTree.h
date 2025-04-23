//
// Created by garen_lee on 2025/4/23.
/**
  ******************************************************************************
  * @file           : L226_invertTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/23
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L226_INVERTTREE_H
#define DEPTHFIRSTSEARCH_L226_INVERTTREE_H

#include "util.h"
class L226_invertTree : public LeetcodeDepthFirstSearch {
private:
    TreeNode* invertTree(TreeNode* root);
public:
    L226_invertTree() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L226_INVERTTREE_H
