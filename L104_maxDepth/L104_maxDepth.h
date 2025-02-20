//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L104_MAXDEPTH_H
#define DEPTHFIRSTSEARCH_L104_MAXDEPTH_H

#include "util.h"
class L104_maxDepth : public LeetcodeDepthFirstSearch{
private:
    int dfs(TreeNode* root, int layer);
    int maxDepth(TreeNode* root);
public:
    L104_maxDepth() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L104_MAXDEPTH_H
