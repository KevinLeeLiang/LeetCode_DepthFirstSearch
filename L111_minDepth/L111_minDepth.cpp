//
// Created by garen_lee on 2025/2/26.
/**
  ******************************************************************************
  * @file           : L111_minDepth.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/26
  ******************************************************************************
  */
//

#include "L111_minDepth.h"

int L111_minDepth::minDepth(TreeNode* root) {
    if (!root)
        return 0;
    if (!root->left && !root->right) {
        return 1;
    }
    if (!root->left) {
        return minDepth(root->right) + 1;
    }
    if (!root->right) {
        return minDepth(root->left) + 1;
    }
    return min(minDepth(root->left), minDepth(root->right)) + 1;

}

void L111_minDepth::test(){
    vector<int> vals = {3,9,20,-1,-1,15,7};
    TreeNode* root = create_treenode(vals, true);
    cout << minDepth(root) << endl;
    vals = {2,-1,3,-1,4,-1,5,-1,6};
    root = create_treenode(vals, true);
    cout << minDepth(root) << endl;
}