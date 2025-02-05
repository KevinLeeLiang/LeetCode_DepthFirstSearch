//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L98_isValidBST.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L98_ISVALIDBST_H
#define DEPTHFIRSTSEARCH_L98_ISVALIDBST_H

#include "util.h"
class L98_isValidBST : public LeetcodeDepthFirstSearch {
private:
    bool isValidBST(TreeNode* root);
public:
    L98_isValidBST() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L98_ISVALIDBST_H
