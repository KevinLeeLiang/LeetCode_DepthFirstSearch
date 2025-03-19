//
// Created by garen_lee on 2025/3/19.
/**
  ******************************************************************************
  * @file           : L129_sumNumbers.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/19
  ******************************************************************************
  */
//

#include "L129_sumNumbers.h"

int L129_sumNumbers::dfs(TreeNode* root, int sum) {
    if (root == nullptr) {
        return 0;
    }
    sum = root->val + sum * 10;
    if (root->left == nullptr && root->right == nullptr) {
        return sum;
    }
    return dfs(root->left, sum) + dfs(root->right, sum);
}

int L129_sumNumbers::sumNumbers(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }
    return dfs(root, 0);
}

void L129_sumNumbers::test() {
    vector<int> nums = {1, 2, 3};

    TreeNode* root = create_treenode(nums, true);
    cout << sumNumbers(root) << endl;
    nums = {4, 9, 0, 5, 1};
    root = create_treenode(nums, true);
    cout << sumNumbers(root) << endl;
    nums = {1, 0};
    root = create_treenode(nums, true);
    cout << sumNumbers(root) << endl;
}