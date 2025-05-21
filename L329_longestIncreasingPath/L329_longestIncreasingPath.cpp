//
// Created by garen_lee on 2025/5/21.
/**
  ******************************************************************************
  * @file           : L329_longestIncreasingPath.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/21
  ******************************************************************************
  */
//

#include "L329_longestIncreasingPath.h"

int L329_longestIncreasingPath::dfs(vector<vector<int>>& matrix, int row, int column, vector<vector<int>>& memo) {
    if (memo[row][column] != 0) {
        return memo[row][column];
    }
    ++memo[row][column];
    for (int i = 0; i < 4; ++i) {
        int new_row = row + dir[i][0];
        int new_col = column + dir[i][1];
        if (new_row >= 0 && new_row < rows && new_col >=0 && new_col < cols
            && matrix[new_row][new_col] > matrix[row][column]) {
            memo[row][column] = max(memo[row][column], dfs(matrix, new_row, new_col, memo) + 1);
        }
    }
    return memo[row][column];
}

int L329_longestIncreasingPath::longestIncreasingPath(vector<vector<int>>& matrix) {
    rows = matrix.size();
    cols = matrix[0].size();
    auto memo = vector<vector<int>>(rows, vector<int>(cols));
    int res = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            res = max(res, dfs(matrix, i, j, memo));
        }
    }
    return res;
}

void L329_longestIncreasingPath::test() {
    vector<vector<int>> matrix = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
    cout << longestIncreasingPath(matrix) << endl;
    matrix = {{3, 4, 5}, {3, 2, 6}, {2, 2, 1}};
    cout << longestIncreasingPath(matrix) << endl;
    matrix = {{1}};
    cout << longestIncreasingPath(matrix) << endl;
}