//
// Created by garen_lee on 2025/4/2.
/**
  ******************************************************************************
  * @file           : L144_preorderTraversal.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/2
  ******************************************************************************
  */
//

#include "L144_preorderTraversal.h"

void L144_preorderTraversal::dfs(TreeNode *root) {
    if (root == nullptr) {
        return;
    }
    res_.push_back(root->val);
    dfs(root->left);
    dfs(root->right);
}

vector<int> L144_preorderTraversal::preorderTraversal(TreeNode* root) {
    res_.clear();
    dfs(root);
    return res_;
}

void L144_preorderTraversal::test() {
    vector<int> nums = {1, -1, 2, 3};
    TreeNode* root = create_treenode(nums, true);
    vector<int> res = preorderTraversal(root);
    print_vector(res);
    nums = {1,2,3,4,5,-1,8,-1,-1,6,7,9};
    root = create_treenode(nums, true);
    res = preorderTraversal(root);
    print_vector(res);
    nums = {};
    root = create_treenode(nums, true);
    res = preorderTraversal(root);
    print_vector(res);
}