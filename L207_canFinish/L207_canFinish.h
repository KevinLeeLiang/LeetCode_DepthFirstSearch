//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L207_canFinish.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L207_CANFINISH_H
#define DEPTHFIRSTSEARCH_L207_CANFINISH_H

#include "util.h"
class L207_canFinish : public LeetcodeDepthFirstSearch {
private:
    vector<vector<int>> edges_;
    vector<int> indeg_;
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites);
public:
    L207_canFinish() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L207_CANFINISH_H
