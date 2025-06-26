//
// Created by garen_lee on 2025/6/25.
/**
  ******************************************************************************
  * @file           : L437_pathSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/25
  ******************************************************************************
  */
//

#include "L437_pathSum.h"

int L437_pathSum::dfs(TreeNode* root, long long curr, int targetSum) {
    if (!root) return 0;
    int ret = 0;
    curr += root->val;
    ret += prefix[curr - targetSum];
    prefix[curr]++;
    ret += dfs(root->left, curr, targetSum);
    ret += dfs(root->right, curr, targetSum);
    prefix[curr]--;
    return ret;
}

int L437_pathSum::pathSum(TreeNode* root, int targetSum) {
    prefix.clear();
    prefix[0] = 1;
    return dfs(root, 0, targetSum);
}

void L437_pathSum::test() {
    vector<int> nums = {10,5,-3,3,2,0,11,3,-2,0,1};
    int targetSum = 8;
    TreeNode* root = create_treenode(nums, false);
    int ans = pathSum(root, targetSum);
    cout << "ans:" << ans << endl;
    nums = {5,4,8,11,0,13,4,7,2,0,0,5,1};
    targetSum = 22;
    root = create_treenode(nums, false);
    ans = pathSum(root, targetSum);
    cout << "ans:" << ans << endl;
}