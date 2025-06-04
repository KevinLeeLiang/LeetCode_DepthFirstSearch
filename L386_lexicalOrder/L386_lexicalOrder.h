//
// Created by garen_lee on 2025/6/4.
/**
  ******************************************************************************
  * @file           : L386_lexicalOrder.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/4
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L386_LEXICALORDER_H
#define DEPTHFIRSTSEARCH_L386_LEXICALORDER_H

#include "util.h"
class L386_lexicalOrder : public LeetcodeDepthFirstSearch {
private:
    vector<int> lexicalOrder(int n);
    void dfs(int cur, int n, vector<int> &res);
public:
    L386_lexicalOrder() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L386_LEXICALORDER_H
