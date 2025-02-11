//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L101_isSymmetric.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#include "L101_isSymmetric.h"

bool L101_isSymmetric::check(TreeNode* p, TreeNode* q) {
    if (p == nullptr && q == nullptr)
        return true;
    if (p == nullptr || q == nullptr)
        return false;
    return p->val == q->val && check(p->left, q->right) && check(p->right, q->left);
}

bool L101_isSymmetric::isSymmetric(TreeNode* root) {
    if (root == nullptr)
        return true;
    return check(root->left, root->right);
}
void L101_isSymmetric::test() {
    vector<int>vals;
    TreeNode*root;
    vals = {1,2,2,3,4,4,3};
    root = create_treenode(vals, true);
    cout << isSymmetric(root) << endl;
    vals = {1,2,2,-1,3,-1,3};
    root = create_treenode(vals, true);
    cout << isSymmetric(root) << endl;
}