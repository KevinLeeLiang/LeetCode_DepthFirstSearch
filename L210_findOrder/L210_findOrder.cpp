//
// Created by garen_lee on 2025/4/16.
/**
  ******************************************************************************
  * @file           : L210_findOrder.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/16
  ******************************************************************************
  */
//

#include "L210_findOrder.h"

void L210_findOrder::dfs(int u) {
    visited_[u] = 1;
    for (int v : edges_[u]) {
        if (!visited_[v]) {
            dfs(v);
            if (!valid_) {
                return ;
            }
        } else if (visited_[v] == 1) {
            valid_ = false;
            return ;
        }
    }
    visited_[u] = 2;
    result_.push_back(u);
}

vector<int> L210_findOrder::findOrder(int numCourses, vector<vector<int>> &prerequisites) {
    edges_.clear();
    visited_.clear();
    result_.clear();
    edges_.resize(numCourses);
    visited_.resize(numCourses);
    valid_ = true;
    for (auto &prerequisite : prerequisites) {
        edges_[prerequisite[1]].push_back(prerequisite[0]);
    }
    for (int i = 0; i < numCourses && valid_; i++) {
        if (!visited_[i]) {
            dfs(i);
        }
    }
    if (!valid_)
        return {};
    reverse(result_.begin(), result_.end());
    return result_;
}

void L210_findOrder::test() {
    vector<vector<int>> prerequisites = {{1, 0}};
    vector<int> result = findOrder(2, prerequisites);
    print_vector(result);
    prerequisites = {{1, 0}, {2, 0}, {3, 1}, {3, 2}};
    result = findOrder(4, prerequisites);
    print_vector(result);
    prerequisites = {};
    result = findOrder(1, prerequisites);
    print_vector(result);
}