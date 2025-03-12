//
// Created by garen_lee on 2025/3/12.
/**
  ******************************************************************************
  * @file           : L116_connect.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/12
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L116_CONNECT_H
#define DEPTHFIRSTSEARCH_L116_CONNECT_H

#include "util.h"
class L116_connect : public LeetcodeDepthFirstSearch {
private:
    Node* connect(Node* root);
    void dfs(Node* left, Node* right);
public:
    L116_connect() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L116_CONNECT_H
