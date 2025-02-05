//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L99_recoverTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#include "L99_recoverTree.h"
void L99_recoverTree::inorder(TreeNode* root, vector<int>& vals) {
    if (root == nullptr) {
        return;
    }
    inorder(root->left, vals);
    vals.push_back(root->val);
    inorder(root->right, vals);
}

pair<int, int> L99_recoverTree::findTwoSwapped(vector<int> vals) {
    int index1 = -1, index2 = -1;
    for (int i = 0; i < vals.size() - 1; ++i) {
        if (vals[i + 1] < vals[i]) {
            index2 = i + 1;
            if (index1 == -1) {
                index1 = i;
            } else {
                break;
            }
        }
    }
    int x = vals[index1];
    int y = vals[index2];
    return {x, y};
}

void L99_recoverTree::recover(TreeNode* root, int count, int x, int y) {
    if (root == nullptr) {
        return;
    }
    if (root->val == x || root->val == y) {
        root->val = root->val == x ? y : x;
        if (--count == 0) {
            return;
        }
    }
    recover(root->left, count, x, y);
    recover(root->right, count, x,y);
}
void L99_recoverTree::recoverTree(TreeNode* root) {
    // 中序排列存入数组
    vector<int> vals;
    inorder(root, vals);
    // 遍历二叉树，找到两个交换的位置
    pair<int,int> swapped= findTwoSwapped(vals);
    // 交换位置
    recover(root, 2, swapped.first, swapped.second);
}

void L99_recoverTree::test() {
    TreeNode* root;
    vector<int>vals;
    vals = {1, 3, -1, -1, 2};
    root = create_treenode(vals, true);
    recoverTree(root);
    cout << print_tree(root) << endl;
    vals = {3, 1, 4, -1, -1, 2};
    root = create_treenode(vals, true);
    recoverTree(root);
    cout << print_tree(root) << endl;
}