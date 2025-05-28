//
// Created by garen_lee on 2025/5/28.
/**
  ******************************************************************************
  * @file           : L365_canMeasureWater.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/28
  ******************************************************************************
  */
//

#include "L365_canMeasureWater.h"

int L365_canMeasureWater::gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

bool L365_canMeasureWater::canMeasureWater(int x, int y, int target) {
    if (x + y < target) {
        return false;
    }
    if (x == 0 || y == 0) {
        return target == 0 || x + y == target;
    }
    int g_c_d = gcd(x, y);
    return target % g_c_d == 0;
}

void L365_canMeasureWater::test() {
    int x = 3;
    int y = 5;
    int target = 4;
    cout << canMeasureWater(x, y, target) << endl;
    x = 2;
    y = 6;
    target = 5;
    cout << canMeasureWater(x, y, target) << endl;
    x = 1;
    y = 2;
    target = 3;
    cout << canMeasureWater(x, y, target) << endl;
}