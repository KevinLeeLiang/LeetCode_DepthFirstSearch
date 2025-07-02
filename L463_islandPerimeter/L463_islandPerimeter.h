//
// Created by garen_lee on 2025/7/2.
/**
  ******************************************************************************
  * @file           : L463_islandPerimeter.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/2
  ******************************************************************************
  */
//

#ifndef L104_MAXDEPTH_CPP_L463_ISLANDPERIMETER_H
#define L104_MAXDEPTH_CPP_L463_ISLANDPERIMETER_H

#include "util.h"
class L463_islandPerimeter : public LeetcodeDepthFirstSearch {
private:
    int dfs(int x, int y, vector<vector<int>>& grid, int n, int m);
    int islandPerimeter(vector<vector<int>>& grid);
    constexpr static int dx[4] = {0, 1, 0, -1};
    constexpr static int dy[4] = {1, 0, -1, 0};
public:
    L463_islandPerimeter() {}
    void test();
};


#endif //L104_MAXDEPTH_CPP_L463_ISLANDPERIMETER_H
