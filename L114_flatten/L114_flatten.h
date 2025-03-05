//
// Created by garen_lee on 2025/3/5.
/**
  ******************************************************************************
  * @file           : L114_flatten.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/5
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L114_FLATTEN_H
#define DEPTHFIRSTSEARCH_L114_FLATTEN_H

#include "util.h"
class L114_flatten : public LeetcodeDepthFirstSearch {
private:
    void flatten(TreeNode *root);
public:
    L114_flatten() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L114_FLATTEN_H
