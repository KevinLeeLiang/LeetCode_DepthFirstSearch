//
// Created by garen_lee on 2025/3/19.
/**
  ******************************************************************************
  * @file           : L124_maxPathSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/19
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L124_MAXPATHSUM_H
#define DEPTHFIRSTSEARCH_L124_MAXPATHSUM_H

#include "util.h"
class L124_maxPathSum : public LeetcodeDepthFirstSearch {
private:
    int maxPathSum(TreeNode* root);
    int maxSum;
    int maxGain(TreeNode* node);
public:
    L124_maxPathSum() : maxSum(INT_MIN) {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L124_MAXPATHSUM_H
