//
// Created by garen_lee on 2025/2/26.
/**
  ******************************************************************************
  * @file           : L112_hasPathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/26
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L112_HASPATHSUM_H
#define DEPTHFIRSTSEARCH_L112_HASPATHSUM_H

#include "util.h"
class L112_hasPathSum : public LeetcodeDepthFirstSearch{
private:
    bool hasPathSum(TreeNode* root, int targetSum);
public:
    L112_hasPathSum() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L112_HASPATHSUM_H
