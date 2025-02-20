//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L104_maxDepth.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#include "L104_maxDepth.h"

int L104_maxDepth::dfs(TreeNode* root, int layer) {
    if (root == nullptr) {
        return layer;
    }
    return dfs(root->left, layer + 1) > dfs(root->right, layer + 1) ? dfs(root->left, layer + 1) : dfs(root->right, layer + 1);
}
int L104_maxDepth::maxDepth(TreeNode* root) {
    int layer = 0;
    if (root == nullptr) {
        return layer;
    }
    return dfs(root->left, layer + 1) > dfs(root->right, layer + 1) ? dfs(root->left, layer + 1) : dfs(root->right, layer + 1);
}
void L104_maxDepth::test() {
    vector<int> nums = {3, 9, 20, -1, -1, 15, 7};
    TreeNode* root = create_treenode(nums, true);
    cout << maxDepth(root) << endl;
    nums = {1, -1, 2};
    root = create_treenode(nums, true);
    cout << maxDepth(root) << endl;
}