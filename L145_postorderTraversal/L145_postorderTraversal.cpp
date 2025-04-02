//
// Created by garen_lee on 2025/4/2.
/**
  ******************************************************************************
  * @file           : L145_postorderTraversal.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/2
  ******************************************************************************
  */
//

#include "L145_postorderTraversal.h"

void L145_postorderTraversal::dfs(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    dfs(root->left);
    dfs(root->right);
    res_.push_back(root->val);
}

vector<int> L145_postorderTraversal::postorderTraversal(TreeNode* root) {
    res_.clear();
    dfs(root);
    return res_;
}

void L145_postorderTraversal::test() {
    vector<int> nums = {1, -1, 2, 3};
    TreeNode* root = create_treenode(nums, true);
    vector<int> result = postorderTraversal(root);
    print_vector(result);
    nums = {1,2,3,4,5,-1,8,-1,-1,6,7,9};
    root = create_treenode(nums, true);
    result = postorderTraversal(root);
    print_vector(result);
    nums = {};
    root = create_treenode(nums, true);
    result = postorderTraversal(root);
    print_vector(result);
    nums = {1};
    root = create_treenode(nums, true);
    result = postorderTraversal(root);
    print_vector(result);
}