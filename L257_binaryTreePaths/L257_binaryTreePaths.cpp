//
// Created by garen_lee on 2025/5/7.
/**
  ******************************************************************************
  * @file           : L257_binaryTreePaths.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/7
  ******************************************************************************
  */
//

#include "L257_binaryTreePaths.h"

void L257_binaryTreePaths::construct_paths(TreeNode* node, string path, vector<string>& paths) {
    if (node != nullptr) {
        path += to_string(node->val);
        if (node->left == nullptr && node->right == nullptr) {
            paths.push_back(path);
        } else {
            path += "->";
            construct_paths(node->left, path, paths);
            construct_paths(node->right, path, paths);
        }
    }
}

vector<string> L257_binaryTreePaths::binaryTreePaths(TreeNode* root) {
    vector<string>paths;
    construct_paths(root, "", paths);
    return paths;
}

void L257_binaryTreePaths::test() {
    vector<int>  nums = {1, 2, 3, -1, 5};
    TreeNode*  root = create_treenode(nums, true);
    vector<string> res = binaryTreePaths(root);
    print_vector(res);
    nums = {1};
    root = create_treenode(nums, true);
    res = binaryTreePaths(root);
    print_vector(res);
}