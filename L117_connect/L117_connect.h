//
// Created by garen_lee on 2025/3/12.
/**
  ******************************************************************************
  * @file           : L117_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/12
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L117_CONNECT_H
#define DEPTHFIRSTSEARCH_L117_CONNECT_H

#include "util.h"
class L117_connect : public LeetcodeDepthFirstSearch {
private:
    Node* connect(Node* root);
    void dfs(Node* node, int depth);
    unordered_map<int, Node*>map_;
public:
    L117_connect() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L117_CONNECT_H
