//
// Created by garen_lee on 2025/2/11.
/**
  ******************************************************************************
  * @file           : L100_isSameTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/11
  ******************************************************************************
  */
//

#include "L100_isSameTree.h"

bool L100_isSameTree::isSameTree(TreeNode *p, TreeNode *q) {
    if (p == nullptr && q == nullptr)
        return true;
    if (p == nullptr || q == nullptr)
        return false;
    if (p->val == q->val)
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    else
        return false;
}

void L100_isSameTree::test() {
    vector<int>pl = {1, 2, 3};
    vector<int>ql = {1, 2, 3};
    TreeNode* p, *q;
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout << isSameTree(p, q) << endl;
    pl = {1, 2};
    ql = {1, -1, 2};
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout << isSameTree(p, q) << endl;
    pl = {1, 2, 1};
    ql = {1, 1, 2};
    p = create_treenode(pl, true);
    q = create_treenode(ql, true);
    cout << isSameTree(p, q) << endl;
}