//
// Created by garen_lee on 2025/2/26.
/**
  ******************************************************************************
  * @file           : L111_minDepth.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/26
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L111_MINDEPTH_H
#define DEPTHFIRSTSEARCH_L111_MINDEPTH_H

#include "util.h"
class L111_minDepth : public LeetcodeDepthFirstSearch{
private:
    int minDepth(TreeNode* root);
public:
    L111_minDepth(){}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L111_MINDEPTH_H
