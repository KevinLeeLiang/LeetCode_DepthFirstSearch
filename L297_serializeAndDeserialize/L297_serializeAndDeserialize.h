//
// Created by garen_lee on 2025/5/14.
/**
  ******************************************************************************
  * @file           : L297_serializeAndDeserialize.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/14
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L297_SERIALIZEANDDESERIALIZE_H
#define DEPTHFIRSTSEARCH_L297_SERIALIZEANDDESERIALIZE_H

#include "util.h"
class L297_serializeAndDeserialize : public LeetcodeDepthFirstSearch {
private:
    string serialize(TreeNode *root);
    TreeNode *deserialize(string data);
    void rserialize(TreeNode* root, string& res);
    TreeNode* rdeserialize(list<string>& data_array);
public:
    L297_serializeAndDeserialize() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L297_SERIALIZEANDDESERIALIZE_H
