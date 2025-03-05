//
// Created by garen_lee on 2025/3/5.
/**
  ******************************************************************************
  * @file           : L114_flatten.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/5
  ******************************************************************************
  */
//

#include "L114_flatten.h"

void L114_flatten::flatten(TreeNode *root) {
    auto v = vector<TreeNode*>();
    auto stk = stack<TreeNode*>();
    TreeNode *node = root;
    while (node != nullptr || !stk.empty()) {
        while (node != nullptr) {
            v.push_back(node);
            stk.push(node);
            node = node->left;
        }
        node = stk.top(); stk.pop();
        node = node->right;
    }
    int size = v.size();
    for (int i = 1; i < size; i++) {
        auto prev = v.at(i - 1), curr = v.at(i);
        prev->left = nullptr;
        prev->right = curr;
    }
}

void L114_flatten::test() {
    vector<int>vals = {1,2,5,3,4,-1,6};
    TreeNode* root = create_treenode(vals, true);
    flatten(root);
    cout << print_tree(root) << endl;
    vals = {};
    root = create_treenode(vals, true);
    flatten(root);
    cout << print_tree(root) << endl;
    vals = {0};
    root = create_treenode(vals, true);
    flatten(root);
    cout << print_tree(root) << endl;
}