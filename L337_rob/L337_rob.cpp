//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L337_rob.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#include "L337_rob.h"

L337::SubtreeStatus L337_rob::dfs(TreeNode* node) {
    if (!node) {
        return {0, 0};
    }
    auto l = dfs(node->left);
    auto r = dfs(node->right);
    int selected = node->val + l.notSelected + r.notSelected;
    int notSelected = max(l.selected, l.notSelected) + max(r.selected, r.notSelected);
    return {selected, notSelected};
}

int L337_rob::rob(TreeNode* root) {
    auto rootStatus = dfs(root);
    return max(rootStatus.selected, rootStatus.notSelected);
}

void L337_rob::test() {
    vector<int> nums = {3,2,3,-1,3,-1,1};
    TreeNode* root = create_treenode(nums, true);
    cout << rob(root) << endl;
    nums = {3,4,5,1,3,-1,1};
    root = create_treenode(nums, true);
    cout << rob(root) << endl;
}