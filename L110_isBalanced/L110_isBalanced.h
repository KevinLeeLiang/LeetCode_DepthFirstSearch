//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L110_isBalanced.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L110_ISBALANCED_H
#define DEPTHFIRSTSEARCH_L110_ISBALANCED_H

#include "util.h"
class L110_isBalanced : public LeetcodeDepthFirstSearch{
    bool isBalanced(TreeNode* root);
    int maxDepth(TreeNode* root);
public:
    L110_isBalanced(){};
    void test();
};


#endif //DEPTHFIRSTSEARCH_L110_ISBALANCED_H
