//
// Created by garen_lee on 2025/3/12.
/**
  ******************************************************************************
  * @file           : L117_connect.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/12
  ******************************************************************************
  */
//

#include "L117_connect.h"

void L117_connect::dfs(Node* node, int depth) {
    if (node == nullptr) {
        return;
    }
    if (map_.find(depth) == map_.end()) {
        map_[depth] = node;
    } else {
        map_[depth]->next = node;
        map_[depth] = node;
    }
    dfs(node->left, depth + 1);
    dfs(node->right, depth + 1);
}

Node* L117_connect::connect(Node* root) {
    map_.clear();
    dfs(root, 0);
    return root;
}

void L117_connect::test() {
    vector<int>vals = {1,2,3,4,5,-1,7};
    Node* node = create_node(vals);
    Node* res = connect(node);
    print_node(res);
}