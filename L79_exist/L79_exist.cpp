//
// Created by garen-lee on 2025/1/29.
/**
  ******************************************************************************
  * @file           : L79_exist.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/29
  ******************************************************************************
  */
//

#include "L79_exist.h"
/**
 * @brief 检查给定的单词是否存在于二维板中
 *
 * 该函数通过深度优先搜索（DFS）来检查二维板中是否存在给定的单词。它递归地遍历二维板上的每个字符，
 * 并尝试匹配单词中的每个字符。如果找到完整的单词，返回true；否则，返回false。
 *
 * @param board 二维字符数组，表示待搜索的板
 * @param visited 二维整数数组，表示每个位置是否已被访问
 * @param i 当前访问的行索引
 * @param j 当前访问的列索引
 * @param s 待搜索的单词
 * @param k 当前匹配到的单词字符索引
 * @return true 如果找到完整的单词
 * @return false 如果未找到完整的单词
 */
bool L79_exist::check(vector<vector<char>>& board, vector<vector<int>>& visited, int i, int j, string& s, int k) {
    // 如果当前字符与单词中对应位置的字符不匹配，返回false
    if (board[i][j] != s[k]) {
        return false;
    } else if (k == s.length() - 1) {
        // 如果已经匹配到单词的最后一个字符，返回true
        return true;
    }
    // 标记当前字符已被访问
    visited[i][j] = true;
    // 定义四个方向的移动（右、左、下、上）
    vector<pair<int, int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    // 初始化结果为false
    bool result = false;
    // 遍历四个方向
    for (const auto& dir: directions) {
        // 计算新的行索引和列索引
        int newi = i + dir.first, newj = j + dir.second;
        // 检查新的位置是否在板的范围内
        if (newi >= 0 && newi < board.size() && newj >= 0 && newj < board[0].size()) {
            // 如果新位置未被访问
            if (!visited[newi][newj]) {
                // 递归检查新位置
                bool flag = check(board, visited, newi, newj, s, k + 1);
                // 如果找到完整的单词，将结果设为true并结束循环
                if (flag) {
                    result = true;
                    break;
                }
            }
        }
    }
    // 回溯：取消当前字符的访问标记
    visited[i][j] = false;
    // 返回结果
    return result;
}

/**
  * 检查二维板上是否存在给定的单词
  *
  * @param board 二维字符数组，表示待搜索的板
  * @param word 待查找的单词字符串
  * @return bool 表示单词是否存在于二维板上
  */
bool L79_exist::exist(vector<vector<char>>& board, string word) {
    // 获取二维板的行数和列数
    int h = board.size();
    int w = board[0].size();

    // 初始化访问标记二维数组，用于记录板上的字符是否被访问过
    vector<vector<int>> visited(h, vector<int>(w));

    // 遍历二维板上的每个字符
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // 在每个字符位置尝试开始递归搜索单词
            bool flag = check(board, visited, i, j, word, 0);

            // 如果找到单词，返回true
            if (flag) {
                return true;
            }
        }
    }

    // 如果遍历结束后仍未找到单词，返回false
    return false;
}

void L79_exist::test() {
    vector<vector<char>> board = {
            {'A','B','C','E'},
            {'S','F','C','S'},
            {'A','D','E','E'}
    };
    string word = "ABCCED";
    cout << exist(board, word) << endl;
    board = {
            {'A','B','C','E'},
            {'S','F','C','S'},
            {'A','D','E','E'}
    };
    word = "SEE";
    cout << exist(board, "SEE") << endl;
    board = {
            {'A','B','C','E'},
            {'S','F','C','S'},
            {'A','D','E','E'}
    };
    word = "ABCB";
    cout << exist(board, "ABCB") << endl;
}