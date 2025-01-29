//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : L79_exist.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L79_EXIST_H
#define DEPTHFIRSTSEARCH_L79_EXIST_H
#include "util.h"

class L79_exist : public LeetcodeDepthFirstSearch{
private:
    bool exist(vector<vector<char>>& board, string word);
    bool check(vector<vector<char>>& board, vector<vector<int>>& visited, int i, int j, string& s, int k);
public:
    L79_exist(){}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L79_EXIST_H
