//
// Created by garen-lee on 2025/4/30.
/**
  ******************************************************************************
  * @file           : L230_kthSmallest.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/30
  ******************************************************************************
  */
//

#include "L230_kthSmallest.h"

int L230_kthSmallest::kthSmallest(TreeNode* root, int k) {
    stack<TreeNode *> stack;
    while (root != nullptr || stack.size() > 0) {
        while (root != nullptr) {
            stack.push(root);
            root = root->left;
        }
        root = stack.top();
        stack.pop();
        --k;
        if (k == 0) {
            break;
        }
        root = root->right;
    }
    return root->val;
}

void L230_kthSmallest::test() {
    vector<int> nums = {3, 1, 4, -1, 2};
    TreeNode* root = create_treenode(nums, true);
    cout << kthSmallest(root, 1) << endl;
    nums = {5,3,6,2,4,-1,-1,1};
    root = create_treenode(nums, true);
    cout << kthSmallest(root, 3) << endl;

}