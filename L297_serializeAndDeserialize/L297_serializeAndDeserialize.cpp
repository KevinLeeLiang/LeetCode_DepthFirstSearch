//
// Created by garen_lee on 2025/5/14.
/**
  ******************************************************************************
  * @file           : L297_serializeAndDeserialize.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/14
  ******************************************************************************
  */
//

#include "L297_serializeAndDeserialize.h"

TreeNode* L297_serializeAndDeserialize::rdeserialize(list<string>& data_array){
    if (data_array.front() == "None") {
        data_array.erase(data_array.begin());
        return nullptr;
    }
    TreeNode* root = new TreeNode(stoi(data_array.front()));
    data_array.erase(data_array.begin());
    root->left = rdeserialize(data_array);
    root->right = rdeserialize(data_array);
    return root;
}

TreeNode* L297_serializeAndDeserialize::deserialize(string data) {
    list<string> data_array;
    string str;
    for (auto & ch : data) {
        if (ch == ',') {
            data_array.push_back(str);
            str.clear();
        }else {
            str.push_back(ch);
        }
    }
    if (! str.empty()) {
        data_array.push_back(str);
        str.clear();
    }
    TreeNode* root = rdeserialize(data_array);
    return root;
}

void L297_serializeAndDeserialize::rserialize(TreeNode* root, string& res) {
    if (root == nullptr) {
        res += "None,";
    } else {
        res += to_string(root->val) + ",";
        rserialize(root->left, res);
        rserialize(root->right, res);
    }
}

string L297_serializeAndDeserialize::serialize(TreeNode* root) {
    string res;
    rserialize(root, res);
    return res;
}

void L297_serializeAndDeserialize::test() {
    vector<int> vec = {1,2,3,-1,-1,4,5};
    TreeNode* root = create_treenode(vec, true);
    string data = serialize(root);
    cout << data << endl;
    TreeNode* node = deserialize(data);
    cout << print_tree(node) << endl;
}