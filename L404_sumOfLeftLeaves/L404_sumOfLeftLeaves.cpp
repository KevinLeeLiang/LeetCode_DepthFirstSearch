//
// Created by garen_lee on 2025/6/11.
/**
  ******************************************************************************
  * @file           : L404_sumOfLeftLeaves.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/11
  ******************************************************************************
  */
//

#include "L404_sumOfLeftLeaves.h"

void L404_sumOfLeftLeaves::dfs(TreeNode *root, int &res) {
    if (root == nullptr) {
        return;
    }
    if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
        res += root->left->val;
    }
    dfs(root->left, res);
    dfs(root->right, res);
}

int L404_sumOfLeftLeaves::sumOfLeftLeaves(TreeNode *root) {
    int res = 0;
    if (root == nullptr) {
        return 0;
    }
    dfs(root, res);
    return res;
}

void L404_sumOfLeftLeaves::test() {
    vector<int> nums = {3, 9, 20, -1, -1, 15, 7};
    TreeNode *root = create_treenode(nums, true);
    cout << sumOfLeftLeaves(root) << endl;
    nums = {1};
    root = create_treenode(nums, true);
    cout << sumOfLeftLeaves(root) << endl;
}