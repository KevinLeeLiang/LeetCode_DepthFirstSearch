//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L99_recoverTree.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L99_RECOVERTREE_H
#define DEPTHFIRSTSEARCH_L99_RECOVERTREE_H

#include "util.h"
class L99_recoverTree : public LeetcodeDepthFirstSearch{
private:
    void inorder(TreeNode* root, vector<int>& vals);
    void recoverTree(TreeNode* root);
    pair<int, int> findTwoSwapped(vector<int> vals);
    void recover(TreeNode* root, int count, int val1, int val2);
public:
    L99_recoverTree(){}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L99_RECOVERTREE_H
