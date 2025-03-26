//
// Created by garen_lee on 2025/3/26.
/**
  ******************************************************************************
  * @file           : L130_solve.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/26
  ******************************************************************************
  */
//

#include "L130_solve.h"

void L130_solve::dfs(vector<vector<char>> &board, int i, int j) {
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') {
        return;
    }
    board[i][j] = '#';
    dfs(board, i + 1, j);
    dfs(board, i - 1, j);
    dfs(board, i, j + 1);
    dfs(board, i, j - 1);
}

void L130_solve::solve(vector<vector<char>> &board) {
    if (board.empty() || board[0].empty()) {
        return;
    }
    int m = board.size(), n = board[0].size();
    for (int i = 0; i < m; ++i) {
        dfs(board, i, 0);
        dfs(board, i, n - 1);
    }
    for (int i = 0; i < n; ++i) {
        dfs(board, 0, i);
        dfs(board, m - 1, i);
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (board[i][j] == 'O') {
                board[i][j] = 'X';
            }
            if (board[i][j] == '#') {
                board[i][j] = 'O';
            }
        }
    }
}

void L130_solve::test() {
    vector<vector<char>> board = {
            {'X', 'X', 'X', 'X'},
            {'X', 'O', 'O', 'X'},
            {'X', 'X', 'O', 'X'},
            {'X', 'O', 'X', 'X'}
    };
    solve(board);
    print_vector_vector(board);
    board = {
            {'X'}
    };
    solve(board);
    print_vector_vector(board);
}