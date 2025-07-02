//
// Created by garen_lee on 2025/7/2.
/**
  ******************************************************************************
  * @file           : L463_islandPerimeter.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/7/2
  ******************************************************************************
  */
//

#include "L463_islandPerimeter.h"

int L463_islandPerimeter::dfs(int x, int y, vector<vector<int>>& grid, int n, int m) {
    if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == 0) {
        return 1;
    }
    if (grid[x][y] == 2) {
        return 0;
    }
    grid[x][y] = 2;
    int ans = 0;
    for (int i = 0; i < 4; ++i) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        ans += dfs(tx, ty, grid, n, m);
    }
    return ans;
}

int L463_islandPerimeter::islandPerimeter(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) {
                ans += dfs(i, j, grid, n, m);
            }
        }
    }
    return ans;
}

void L463_islandPerimeter::test() {
    vector<vector<int>> grid = {{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
    cout << islandPerimeter(grid) << endl;
    grid = {{1}};
    cout << islandPerimeter(grid) << endl;
    grid = {{1,0}};
    cout << islandPerimeter(grid) << endl;
}