//
// Created by garen_lee on 2025/4/23.
/**
  ******************************************************************************
  * @file           : L226_invertTree.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/23
  ******************************************************************************
  */
//

#include "L226_invertTree.h"

TreeNode *L226_invertTree::invertTree(TreeNode *root) {
    if (root == nullptr) {
        return nullptr;
    }
    TreeNode *left = invertTree(root->left);
    TreeNode *right = invertTree(root->right);
    root->left = right;
    root->right = left;
}

void L226_invertTree::test(){
    vector<int> nums = {4,2,7,1,3,6,9};
    TreeNode *root = create_treenode(nums, true);
    TreeNode* res  = invertTree(root);
    cout << print_tree(res) << endl;
    nums = {2,1,3};
    root = create_treenode(nums, true);
    res  = invertTree(root);
    cout << print_tree(res) << endl;
    nums = {};
    root = create_treenode(nums, true);
    res  = invertTree(root);
    cout << print_tree(res) << endl;
}