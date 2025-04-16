//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L207_canFinish.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#include "L207_canFinish.h"



bool L207_canFinish::canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    edges_.clear();
    indeg_.clear();
    edges_.resize(numCourses);
    indeg_.resize(numCourses);
    for (auto& info : prerequisites) {
        edges_[info[1]].push_back(info[0]);
        ++indeg_[info[0]];
    }
    queue<int> q;
    for (int i = 0; i < numCourses; ++i) {
        if (indeg_[i] == 0) {
            q.push(i);
        }
    }
    int visited = 0;
    while (!q.empty()) {
        ++visited;
        int u = q.front();
        q.pop();
        for (int v : edges_[u]) {
            --indeg_[v];
            if (indeg_[v] == 0) {
                q.push(v);
            }
        }
    }
    return  visited == numCourses;
}

void L207_canFinish::test(){
    vector<vector<int>> prerequisites = {{1, 0}};
    cout << canFinish(2, prerequisites) << endl;
    prerequisites = {{1, 0}, {0, 1}};
    cout << canFinish(2, prerequisites) << endl;
}