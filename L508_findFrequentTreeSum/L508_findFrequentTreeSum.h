//
// Created by garen_lee on 2025/7/30.
/**
  ******************************************************************************
  * @file           : L508_findFrequentTreeSum.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/30
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L508_FINDFREQUENTTREESUM_H
#define L104_MAXDEPTH_CPP_L508_FINDFREQUENTTREESUM_H

#include "util.h"
class L508_findFrequentTreeSum : public LeetcodeDepthFirstSearch {
private:
    vector<int> findFrequentTreeSum(TreeNode* root);
    int dfs(TreeNode* node);
    int maxCnt = 0;
    unordered_map<int, int>cnt;
public:
    L508_findFrequentTreeSum() {}
    void test();
};


#endif //L104_MAXDEPTH_CPP_L508_FINDFREQUENTTREESUM_H
