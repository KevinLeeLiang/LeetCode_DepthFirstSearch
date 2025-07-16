//
// Created by garen_lee on 2025/7/16.
/**
  ******************************************************************************
  * @file           : L501_findMode.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/16
  ******************************************************************************
  */
//

#include "L501_findMode.h"

void L501_findMode::update(int x) {
    if (x == base) {
        ++count;
    } else {
        count = 1;
        base = x;
    }
    if (count == maxCount) {
        answer.push_back(base);
    }
    if (count > maxCount) {
        maxCount = count;
        answer = vector<int>{base};
    }
}

void L501_findMode::dfs(TreeNode* root) {
    if (!root) return;
    dfs(root->left);
    update(root->val);
    dfs(root->right);
}

vector<int> L501_findMode::findMode(TreeNode* root) {
    base = 0;
    count = 0;
    maxCount = 0;
    answer.clear();
    dfs(root);
    return answer;
}

void L501_findMode::test() {
    vector<int> nums = {1, -1, 2, 2};
    TreeNode* root = create_treenode(nums, true);
    vector<int> res = findMode(root);
    print_vector(res);
    nums = {0};
    root = create_treenode(nums, true);
    res = findMode(root);
    print_vector(res);
}