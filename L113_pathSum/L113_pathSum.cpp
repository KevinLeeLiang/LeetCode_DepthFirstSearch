//
// Created by garen_lee on 2025/3/5.
/**
  ******************************************************************************
  * @file           : L113_pathSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/5
  ******************************************************************************
  */
//

#include "L113_pathSum.h"

void L113_pathSum::dfs(TreeNode *root, int targetSum, vector<int> &path, vector<vector<int>> &res) {
    if (!root) {
        return;
    }
    path.push_back(root->val);
    if (!root->left && !root->right && root->val == targetSum) {
        res.push_back(path);
    }
    dfs(root->left, targetSum - root->val, path, res);
    dfs(root->right, targetSum - root->val, path, res);
    path.pop_back();
}

vector<vector<int>> L113_pathSum::pathSum(TreeNode *root, int targetSum) {
    if (!root) {
        return {};
    }
    vector<vector<int>> res;
    vector<int> path;
    dfs(root, targetSum, path, res);
    return res;
}

void L113_pathSum::test() {
    vector<int> vals;
    vals = {5, 4, 8, 11, -1, 13, 4, 7, 2, -1, -1, 5, 1};
    int targetSum = 22;
    TreeNode* root = create_treenode(vals, true);
    vector<vector<int>> res = pathSum(root, targetSum);
    print_vector_vector(res);
    vals = {1, 2, 3};
    targetSum = 5;
    root = create_treenode(vals, true);
    res = pathSum(root, targetSum);
    print_vector_vector(res);
    vals = {1, 2};
    targetSum = 0;
    root = create_treenode(vals, true);
    res = pathSum(root, targetSum);
}