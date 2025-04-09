//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L199_rightSideView.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#include "L199_rightSideView.h"

vector<int> L199_rightSideView::rightSideView(TreeNode* root) {
    unordered_map<int, int> rightmostValueAtDepth;
    int max_depth = -1;

    stack<TreeNode*> nodeStack;
    stack<int> depthStack;
    nodeStack.push(root);
    depthStack.push(0);

    while (!nodeStack.empty()) {
        TreeNode* node = nodeStack.top();
        nodeStack.pop();
        int depth = depthStack.top();
        depthStack.pop();

        if (node != NULL) {
            // 维护二叉树的最大深度
            max_depth = max(max_depth, depth);

            // 如果不存在对应深度的节点我们才插入
            if (rightmostValueAtDepth.find(depth) == rightmostValueAtDepth.end()) {
                rightmostValueAtDepth[depth] =  node -> val;
            }

            nodeStack.push(node -> left);
            nodeStack.push(node -> right);
            depthStack.push(depth + 1);
            depthStack.push(depth + 1);
        }
    }

    vector<int> rightView;
    for (int depth = 0; depth <= max_depth; ++depth) {
        rightView.push_back(rightmostValueAtDepth[depth]);
    }

    return rightView;
}

void L199_rightSideView::test() {
    vector<int> nums = {1,2,3,-1,5,-1,4};
    TreeNode* root = create_treenode(nums, true);
    vector<int> res = rightSideView(root);
    print_vector(res);
    nums = {1,2,3,4,-1,-1,-1,5};
    root = create_treenode(nums, true);
    res = rightSideView(root);
    print_vector(res);
    nums = {1,-1,3};
    root = create_treenode(nums, true);
    res = rightSideView(root);
    print_vector(res);
}