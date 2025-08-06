//
// Created by garen_lee on 2025/8/6.
/**
  ******************************************************************************
  * @file           : L513_findBottomLeftValue.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/8/6
  ******************************************************************************
  */
//

#include "L513_findBottomLeftValue.h"

int L513_findBottomLeftValue::findBottomLeftValue(TreeNode* root) {
    if (!root) return 0;
    queue<TreeNode*> stk;
    stk.push(root);
    int size = stk.size();
    int ans = root->val;
    while (stk.size() != 0) {
        size = stk.size();
        for (int i = 0; i < size; i++) {
            TreeNode* p = stk.front();
            stk.pop();
            if (i == 0) ans = p->val;
            if (p->left) stk.push(p->left);
            if (p->right) stk.push(p->right);
        }
    }
    return ans;
}

void L513_findBottomLeftValue::test() {
    vector<int> vec = {2,1,3};
    TreeNode* root = create_treenode(vec, true);
    cout << findBottomLeftValue(root) << endl;
    vec = {1,2,3,4,-1,5,6,-1,-1,7};
    root = create_treenode(vec, true);
    cout << findBottomLeftValue(root) << endl;
}