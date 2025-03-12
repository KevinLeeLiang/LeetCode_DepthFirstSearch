//
// Created by garen_lee on 2025/3/12.
/**
  ******************************************************************************
  * @file           : L116_connect.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/12
  ******************************************************************************
  */
//

#include "L116_connect.h"

void L116_connect::dfs(Node *left, Node *right) {
    if (left == nullptr || right == nullptr) {
        return;
    }
    left->next = right;
    dfs(left->left, left->right);
    dfs(left->right, right->left);
    dfs(right->left, right->right);
}

Node *L116_connect::connect(Node *root) {
    if (!root) {
        return nullptr;
    }
    dfs(root->left, root->right);
    return root;
}

void L116_connect::test() {
    vector<int>vals = {1, 2, 3, 4, 5, 6, 7};
    Node *root = create_node(vals);
    Node *res = connect(root);
    print_node(res);
    vals = {};
    root = create_node(vals);
    res = connect(root);
    print_node(res);
}