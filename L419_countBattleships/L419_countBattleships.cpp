//
// Created by garen_lee on 2025/6/18.
/**
  ******************************************************************************
  * @file           : L419_countBattleships.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/18
  ******************************************************************************
  */
//

#include "L419_countBattleships.h"

int L419_countBattleships::countBattleships(vector<vector<char>>& board) {
    int ans = 0;
    int row = board.size();
    int col = board[0].size();
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (board[i][j] == 'X') {
                if (i > 0 && board[i - 1][j] == 'X') continue;
                if (j > 0 && board[i][j - 1] == 'X') continue;
                ans++;
            }
        }
    }
    return ans;
}

void L419_countBattleships::test() {
    vector<vector<char>> board = {{'X','.','.','X'},{'.','.','.','X'},{'.','.','.','X'}};
    cout << countBattleships(board) << endl;
    board = {{'.'}};
    cout << countBattleships(board) << endl;
}