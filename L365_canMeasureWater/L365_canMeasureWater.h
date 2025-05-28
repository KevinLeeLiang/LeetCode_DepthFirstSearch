//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L365_canMeasureWater.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#ifndef DEPTHFIRSTSEARCH_L365_CANMEASUREWATER_H
#define DEPTHFIRSTSEARCH_L365_CANMEASUREWATER_H

#include "util.h"
class L365_canMeasureWater : public LeetcodeDepthFirstSearch {
private:
    int gcd(int a, int b);
    bool canMeasureWater(int x, int y, int target);
public:
    L365_canMeasureWater() {}
    void test();
};


#endif //DEPTHFIRSTSEARCH_L365_CANMEASUREWATER_H
