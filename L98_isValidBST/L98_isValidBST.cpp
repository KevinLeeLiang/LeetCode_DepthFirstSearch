//
// Created by garen_lee on 2025/2/5.
/**
  ******************************************************************************
  * @file           : L98_isValidBST.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/5
  ******************************************************************************
  */
//

#include "L98_isValidBST.h"

bool L98_isValidBST::isValidBST(TreeNode* root) {
    stack<TreeNode*>st;
    long long inorder = (long long)INT_MIN - 1;
    while (root || !st.empty()) {
        while (root) {
            st.push(root);
            root = root->left;
        }
        root = st.top();
        st.pop();

        if (root->val <= inorder) {
            return false;
        } else {
            inorder = root->val;
            root = root->right;
        }
    }
    return true;
}
void L98_isValidBST::test() {
    vector<int>nums;
    TreeNode* root = nullptr;
    nums = {2,1,3};
    root = create_treenode(nums, true);
    cout << isValidBST(root) << endl;
    nums = {5,1,4,-1,-1,3,6};
    root = create_treenode(nums, true);
    cout << isValidBST(root) << endl;
}