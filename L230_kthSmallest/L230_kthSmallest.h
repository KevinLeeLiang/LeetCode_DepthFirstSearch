//
// Created by garen-lee on 2025/4/30.
/**
  ******************************************************************************
  * @file           : L230_kthSmallest.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/30
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L230_KTHSMALLEST_H
#define DEPTHFIRSTSEARCH_L230_KTHSMALLEST_H

#include "util.h"
class L230_kthSmallest : public LeetcodeDepthFirstSearch {
    int kthSmallest(TreeNode* root, int k);
public:
    L230_kthSmallest() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L230_KTHSMALLEST_H
