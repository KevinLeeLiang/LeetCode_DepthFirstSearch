//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L100_isSameTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L100_ISSAMETREE_H
#define DEPTHFIRSTSEARCH_L100_ISSAMETREE_H

#include "util.h"
class L100_isSameTree : public LeetcodeDepthFirstSearch{
private:
    bool isSameTree(TreeNode* p, TreeNode* q);
public:
    L100_isSameTree(){}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L100_ISSAMETREE_H
