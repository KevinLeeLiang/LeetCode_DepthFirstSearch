//
// Created by garen-lee on 2025/4/30.
/**
  ******************************************************************************
  * @file           : L235_lowerCommonAncestor.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/30
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L235_LOWERCOMMONANCESTOR_H
#define DEPTHFIRSTSEARCH_L235_LOWERCOMMONANCESTOR_H

#include "util.h"
class L235_lowerCommonAncestor : public LeetcodeDepthFirstSearch {
private:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) ;
public:
    L235_lowerCommonAncestor() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L235_LOWERCOMMONANCESTOR_H
