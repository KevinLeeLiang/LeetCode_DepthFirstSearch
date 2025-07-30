//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L508_findFrequentTreeSum.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#include "L508_findFrequentTreeSum.h"

int L508_findFrequentTreeSum::dfs(TreeNode *node) {
    if (!node) return 0;
    int sum = node->val + dfs(node->left) + dfs(node->right);
    maxCnt = max(maxCnt, ++cnt[sum]);
    return sum;
}

vector<int> L508_findFrequentTreeSum::findFrequentTreeSum(TreeNode *root) {
    cnt.clear();
    maxCnt = 0;
    dfs(root);
    vector<int>ans;
    for (auto &[s, c] : cnt) {
        if (c == maxCnt) {
            ans.push_back(s);
        }
    }
    return ans;
}

void L508_findFrequentTreeSum::test() {
    maxCnt = 0;
    cnt.clear();
    vector<int> vec = {5, 2, -3};
    TreeNode *root = create_treenode(vec, false);
    vector<int> res = findFrequentTreeSum(root);
    print_vector(res);
    vec = {5, 2, -5};
    root = create_treenode(vec, false);
    res = findFrequentTreeSum(root);
    print_vector(res);
}