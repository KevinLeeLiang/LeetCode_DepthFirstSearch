//
// Created by garen-lee on 2025/4/30.
/**
  ******************************************************************************
  * @file           : L235_lowerCommonAncestor.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/30
  ******************************************************************************
  */
//

#include "L235_lowerCommonAncestor.h"

TreeNode* L235_lowerCommonAncestor::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    TreeNode* ancestor = root;
    while (true) {
        if (p->val < ancestor->val && q->val < ancestor->val) {
            ancestor = ancestor->left;
        }
        else if (p->val > ancestor->val && q->val > ancestor->val) {
            ancestor = ancestor->right;
        }
        else {
            break;
        }
    }
    return ancestor;
}

void L235_lowerCommonAncestor::test() {
    vector<int> nums = {6,2,8,0,4,7,9,-1,-1,3,5};
    TreeNode* root = create_treenode(nums, true);
    TreeNode*p = create_treenode({2}, true);
    TreeNode*q = create_treenode({8}, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
    nums = {6,2,8,0,4,7,9,-1,-1,3,5};
    root = create_treenode(nums, true);
    p = create_treenode({2}, true);
    q = create_treenode({4}, true);
    cout << lowestCommonAncestor(root, p, q)->val << endl;
}