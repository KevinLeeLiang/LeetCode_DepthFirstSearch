//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L210_findOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L210_FINDORDER_H
#define DEPTHFIRSTSEARCH_L210_FINDORDER_H

#include "util.h"
class L210_findOrder : public LeetcodeDepthFirstSearch {
private:
    vector<vector<int>>edges_;
    vector<int> visited_;
    vector<int> result_;
    bool valid_;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites);
    void dfs(int u);
public:
    L210_findOrder() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L210_FINDORDER_H
