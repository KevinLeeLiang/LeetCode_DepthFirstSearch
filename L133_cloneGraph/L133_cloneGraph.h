//
// Created by garen_lee on 2025/3/26.
/**
  ******************************************************************************
  * @file           : L133_cloneGraph.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/26
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L133_CLONEGRAPH_H
#define DEPTHFIRSTSEARCH_L133_CLONEGRAPH_H

#include "util.h"

namespace L133 {
    class Node {
    public:
        int val;
        vector<Node*> neighbors;
        Node() {
            val = 0;
            neighbors = vector<Node*>();
        }
        Node(int _val) {
            val = _val;
            neighbors = vector<Node*>();
        }
        Node(int _val, vector<Node*> _neighbors) {
            val = _val;
            neighbors = _neighbors;
        }
    };
}

class L133_cloneGraph : public LeetcodeDepthFirstSearch {
private:
    L133::Node* cloneGraph(L133::Node* node);
    unordered_map<L133::Node*, L133::Node*>visited;

    L133::Node* createNode(vector<vector<int>> node_vals) {
        unordered_map<int, L133::Node*> node_map;
        for (int i = 1; i <= node_vals.size(); i++) {
            L133::Node* node = new L133::Node(i);
            node_map[i] = node;
        }
        for (int i = 0; i < node_vals.size(); i++) {
            for (int j = 0; j < node_vals[i].size(); j++) {
                node_map[i + 1]->neighbors.push_back(node_map[node_vals[i][j]]);
            }
        }
        return node_map[node_vals[0][0]];
    }
    void printNode(L133::Node* root) {
        for (int i = 0; i < root->neighbors.size(); i++) {
            cout << root->neighbors[i]->val << " ";
        }
        cout << endl;
    }
public:
    L133_cloneGraph() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L133_CLONEGRAPH_H
