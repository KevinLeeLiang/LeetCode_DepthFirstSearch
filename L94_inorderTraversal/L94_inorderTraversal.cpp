//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : L94_inorderTraversal.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#include "L94_inorderTraversal.h"

void L94_inorderTraversal::dfs(TreeNode *root, vector<int> &ans){
    if (root == nullptr) return;
    dfs(root->left, ans);
    ans.push_back(root->val);
    dfs(root->right, ans);
}

vector<int> L94_inorderTraversal::inorderTraversal(TreeNode *root) {
    vector<int>ans;
    dfs(root, ans);
    return ans;
}

void L94_inorderTraversal::test() {
    vector<int> nums = {1, -1, 2, 3}, ans;
    TreeNode *root;
    root = create_treenode(nums, true);
    ans = inorderTraversal(root);
    print_vector(ans);
    nums = {};
    root = create_treenode(nums, true);
    ans = inorderTraversal(root);
    print_vector(ans);
    nums = {1};
    root = create_treenode(nums, true);
    ans = inorderTraversal(root);
    print_vector(ans);
}