//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L101_ISSYMMETRIC_H
#define DEPTHFIRSTSEARCH_L101_ISSYMMETRIC_H

#include "util.h"
class L101_isSymmetric : public LeetcodeDepthFirstSearch{
private:
    bool isSymmetric(TreeNode* root);
    bool check(TreeNode* p, TreeNode* q);
public:
    L101_isSymmetric(){}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L101_ISSYMMETRIC_H
