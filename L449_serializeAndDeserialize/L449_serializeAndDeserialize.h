//
// Created by garen_lee on 2025/7/2.
/**
  ******************************************************************************
  * @file           : L449_serializeAndDeserialize.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/2
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L449_SERIALIZEANDDESERIALIZE_H
#define L104_MAXDEPTH_CPP_L449_SERIALIZEANDDESERIALIZE_H

#include "util.h"
class L449_serializeAndDeserialize : public LeetcodeDepthFirstSearch {
private:
    string serialize(TreeNode *root);
    TreeNode *deserialize(string data);
    vector<string> split(const string &str, char dec);
    void postOrder(TreeNode *root,vector<int> & arr);
    TreeNode * construct(int lower, int upper, stack<int> & st);
public:
    L449_serializeAndDeserialize() {}
    void test();
};


#endif //L104_MAXDEPTH_CPP_L449_SERIALIZEANDDESERIALIZE_H
