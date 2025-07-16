//
// Created by garen_lee on 2025/7/16.
/**
  ******************************************************************************
  * @file           : L501_findMode.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/16
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L501_FINDMODE_H
#define L104_MAXDEPTH_CPP_L501_FINDMODE_H

#include "util.h"
class L501_findMode : public LeetcodeDepthFirstSearch {
private:
    vector<int> findMode(TreeNode* root);
    void dfs(TreeNode* root);
    void update(int x);
    vector<int> answer;
    int base, count, maxCount;
public:
    L501_findMode() {}
    void test();
};


#endif //L104_MAXDEPTH_CPP_L501_FINDMODE_H
