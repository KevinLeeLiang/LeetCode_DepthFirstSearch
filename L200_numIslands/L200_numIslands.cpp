//
// Created by garen_lee on 2025/4/9.
/**
  ******************************************************************************
  * @file           : L200_numIslands.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/9
  ******************************************************************************
  */
//

#include "L200_numIslands.h"

void L200_numIslands::dfs(vector<vector<char>>& grid, int r, int c) {
    int nr = grid.size();
    int nc = grid[0].size();
    grid[r][c] = '0';
    if (r - 1>= 0 && grid[r - 1][c] == '1') dfs(grid, r - 1, c);
    if (c - 1>= 0 && grid[r][c - 1] == '1') dfs(grid, r, c - 1);
    if (r + 1 < nr && grid[r + 1][c] == '1') dfs(grid, r + 1, c);
    if (c + 1 < nc && grid[r][c + 1] == '1') dfs(grid, r, c + 1);
}

int L200_numIslands::numIslands(vector<vector<char>>& grid) {
    int nr = grid.size();
    if (!nr) return 0;
    int nc = grid[0].size();

    int num_islands = 0;
    for (int r = 0; r < nr; ++r) {
        for (int c = 0; c < nc; ++c) {
            if (grid[r][c] == '1') {
                ++num_islands;
                dfs(grid, r, c);
            }
        }
    }
    return num_islands;
}

void L200_numIslands::test() {
    vector<vector<char>> grid = {
            {'1', '1', '1', '1', '0'},
            {'1', '1', '0', '1', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '0', '0', '0'}
    };
    cout << numIslands(grid) << endl;
    grid = {
            {'1', '1', '0', '0', '0'},
            {'1', '1', '0', '0', '0'},
            {'0', '0', '1', '0', '0'},
            {'0', '0', '0', '1', '1'}
    };
    cout << numIslands(grid) << endl;
}