//
// Created by garen_lee on 2025/5/21.
/**
  ******************************************************************************
  * @file           : L332_findItinerary.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/21
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L332_FINDITINERARY_H
#define DEPTHFIRSTSEARCH_L332_FINDITINERARY_H

#include "util.h"
class L332_findItinerary : public LeetcodeDepthFirstSearch {
private:
    vector<string> findItinerary(vector<vector<string>>& tickets);
public:
    L332_findItinerary() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L332_FINDITINERARY_H
