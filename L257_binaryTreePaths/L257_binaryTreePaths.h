//
// Created by garen_lee on 2025/5/7.
/**
  ******************************************************************************
  * @file           : L257_binaryTreePaths.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/7
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L257_BINARYTREEPATHS_H
#define DEPTHFIRSTSEARCH_L257_BINARYTREEPATHS_H

#include "util.h"
class L257_binaryTreePaths : public LeetcodeDepthFirstSearch {
private:
    vector<string> binaryTreePaths(TreeNode *root);
    void construct_paths(TreeNode *root, string path, vector<string> &paths);
public:
    L257_binaryTreePaths() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L257_BINARYTREEPATHS_H
