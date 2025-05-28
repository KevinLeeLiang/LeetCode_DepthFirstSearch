//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L337_rob.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L337_ROB_H
#define DEPTHFIRSTSEARCH_L337_ROB_H

#include "util.h"

namespace L337 {
struct SubtreeStatus {
    int selected;
    int notSelected;
};
}
class L337_rob : public LeetcodeDepthFirstSearch {
private:
    int rob(TreeNode *root);
    L337::SubtreeStatus dfs(TreeNode* node);
public:
    L337_rob() {}

    void test();
};


#endif //DEPTHFIRSTSEARCH_L337_ROB_H
