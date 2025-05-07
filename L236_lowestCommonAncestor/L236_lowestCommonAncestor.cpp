//
// Created by garen_lee on 2025/5/7.
/**
  ******************************************************************************
  * @file           : L236_lowestCommonAncestor.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/7
  ******************************************************************************
  */
//

#include "L236_lowestCommonAncestor.h"

void L236_lowestCommonAncestor::dfs(TreeNode* root) {
    if (root->left != nullptr) {
        fa[root->left->val] = root;
        dfs(root->left);
    }
    if (root->right != nullptr) {
        fa[root->right->val] = root;
        dfs(root->right);
    }
}

TreeNode* L236_lowestCommonAncestor::lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    fa.clear();
    vis.clear();
    fa[root->val] = nullptr;
    dfs(root);
    while (p != nullptr) {
        vis[p->val] = true;
        p = fa[p->val];
    }
    while (q != nullptr) {
        if (vis[q->val]) return q;
        q = fa[q->val];
    }
    return nullptr;
}

TreeNode* L236_lowestCommonAncestor::getNode(int val, TreeNode* node) {
    if (node == nullptr)
        return nullptr;
    if (node->val == val)
        return node;
    if (node->left != nullptr){
        if (getNode(val, node->left) != nullptr)
            return getNode(val, node->left);
    }
    if (node->right != nullptr) {
        if (getNode(val, node->right) != nullptr)
            return getNode(val, node->right);
    }
    return nullptr;
}

void L236_lowestCommonAncestor::test() {
    vector<int>vals = {3,5,1,6,2,0,8,-1,-1,7,4};
    int p = 5, q = 1;
    TreeNode* root = create_treenode(vals, true);
    TreeNode* node = root;
    TreeNode*  p_node = getNode(p, node);
    node = root;
    TreeNode*  q_node = getNode(q, node);
    cout << lowestCommonAncestor(root, p_node, q_node)->val << endl;
    vals = {3,5,1,6,2,0,8,-1,-1,7,4};
    p = 5, q = 4;
    root = create_treenode(vals, true);
    node = root;
    p_node = getNode(p, node);
    node = root;
    q_node = getNode(q, node);
    cout << lowestCommonAncestor(root, p_node, q_node)->val << endl;
    vals = {1,2};
    p = 1, q = 2;
    root = create_treenode(vals, true);
    node = root;
    p_node = getNode(p, node);
    node = root;
    q_node = getNode(q, node);
    cout << lowestCommonAncestor(root, p_node, q_node)->val << endl;
}