//
// Created by garen_lee on 2025/2/20.
/**
  ******************************************************************************
  * @file           : L110_isBalanced.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/20
  ******************************************************************************
  */
//

#include "L110_isBalanced.h"

int L110_isBalanced::maxDepth(TreeNode *root) {
    if (root == nullptr) {
        return 0;
    }
    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

bool L110_isBalanced::isBalanced(TreeNode *root) {
    if (root == nullptr) {
        return true;
    }
    return abs(maxDepth(root->left) - maxDepth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}

void L110_isBalanced::test() {
    vector<int> vals = {3, 9, 20, -1, -1, 15, 7};
    TreeNode* root = create_treenode(vals, true);
    cout << isBalanced(root) << endl;
    vals = {1, 2, 2, 3, 3, -1, -1, 4, 4};
    root = create_treenode(vals, true);
    cout << isBalanced(root) << endl;
}