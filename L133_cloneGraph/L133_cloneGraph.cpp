//
// Created by garen_lee on 2025/3/26.
/**
  ******************************************************************************
  * @file           : L133_cloneGraph.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/26
  ******************************************************************************
  */
//

#include "L133_cloneGraph.h"

L133::Node *L133_cloneGraph::cloneGraph(L133::Node *node) {
    if (node == nullptr) {
        return node;
    }
    if (visited.find(node) != visited.end()) {
        return visited[node];
    }
    L133::Node* clone_node = new L133::Node(node->val);
    visited[node] = clone_node;
    int n = node->neighbors.size();
    for (int i = 0; i < n; i++) {
        clone_node->neighbors.emplace_back(cloneGraph(node->neighbors[i]));
    }
    return clone_node;
}

void L133_cloneGraph::test() {
    vector<vector<int>> adjList = {{2, 4},
                                   {1, 3},
                                   {2, 4},
                                   {1, 3}};
    L133::Node* root = createNode(adjList);
    L133::Node* node = cloneGraph(root);
    printNode(node);
    adjList = {{}};
    root = createNode(adjList);
    node = cloneGraph(root);
    printNode(node);
    adjList = {};
    root = createNode(adjList);
    node = cloneGraph(root);
    printNode(node);
}