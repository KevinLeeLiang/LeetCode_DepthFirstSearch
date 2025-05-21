//
// Created by garen_lee on 2025/5/21.
/**
  ******************************************************************************
  * @file           : L332_findItinerary.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/21
  ******************************************************************************
  */
//

#include "L332_findItinerary.h"

vector<string> L332_findItinerary::findItinerary(vector<vector<string>>& tickets) {
    unordered_map<string, vector<string>>graph;
    for (const auto &ticket : tickets) {
        graph[ticket[0]].push_back(ticket[1]);
    }
    for (auto& pair : graph) {
        sort(pair.second.begin(), pair.second.end(), greater<string>());
    }
    vector<string>itinerary;
    vector<string>stk;
    stk.push_back("JFK");
    while(!stk.empty()) {
        string& from = stk.back();
        if (graph[from].empty()) {
            itinerary.push_back(from);
            stk.pop_back();
        } else {
            string to = graph[from].back();
            graph[from].pop_back();
            stk.push_back(to);
        }
    }
    reverse(itinerary.begin(), itinerary.end());
    return itinerary;
}

void L332_findItinerary::test() {
    vector<vector<string>> tickets = {{"MUC", "LHR"}, {"JFK", "MUC"}, {"SFO", "SJC"}, {"LHR", "SFO"}};
    vector<string> res = findItinerary(tickets);
    print_vector(res);
    tickets = {{"JFK", "SFO"}, {"JFK", "ATL"}, {"SFO", "ATL"}, {"ATL", "JFK"}, {"ATL", "SFO"}};
    res = findItinerary(tickets);
    print_vector(res);
}