//
// Created by garen_lee on 2025/5/7.
/**
  ******************************************************************************
  * @file           : L236_lowestCommonAncestor.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/7
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L236_LOWESTCOMMONANCESTOR_H
#define DEPTHFIRSTSEARCH_L236_LOWESTCOMMONANCESTOR_H

#include "util.h"
class L236_lowestCommonAncestor : public LeetcodeDepthFirstSearch {
private:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
    TreeNode* getNode(int val, TreeNode* node);
    void dfs(TreeNode* root);
    unordered_map<int, TreeNode*> fa;
    unordered_map<int, bool> vis;
public:
    L236_lowestCommonAncestor() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L236_LOWESTCOMMONANCESTOR_H
